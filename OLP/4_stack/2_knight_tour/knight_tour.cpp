#include <iostream>
#include <stack>
using namespace std;

#define MAX 10

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int a[MAX][MAX] = {0};
int n;

struct Move {
    int x, y, count, k; // 'k' is used to keep track of the next direction to try
};

void print_path() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", a[i][j]);
        }
        cout << endl;
    }
    cout << endl;
}

bool is_valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n && a[x][y] == 0);
}

void knight_tour() {
    stack<Move> stk;
    int num = 0;

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            a[x][y] = 1; // Start from the first move
            stk.push({x, y, 1, 0});

            while (!stk.empty()) {
                Move &current = stk.top();

                if (current.count == n * n) {
                    num++;
                    cout << "\nSolution " << num << ":" << endl;
                    print_path();
                    break;
                }

                bool moved = false;
                while (current.k < 8 && !moved) {
                    int x_next = current.x + dx[current.k];
                    int y_next = current.y + dy[current.k];

                    if (is_valid(x_next, y_next)) {
                        a[x_next][y_next] = current.count + 1;
                        stk.push({x_next, y_next, current.count + 1, 0});
                        moved = true;
                    } else {
                        current.k++; // Try the next direction
                    }
                }

                if (!moved) {
                    a[current.x][current.y] = 0; // Backtrack
                    stk.pop();
                    if (!stk.empty()) {
                        stk.top().k++; // Increment the direction for the previous move
                    }
                }
            }

            // Clear the board for the next starting position
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    a[i][j] = 0;
        }
    }
}

int main() {
    n = 6; // Size of the chessboard
    knight_tour();
    return 0;
}
