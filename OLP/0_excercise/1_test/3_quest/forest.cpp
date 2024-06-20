#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <cmath> 
#include <algorithm>
using namespace std;

struct Cell {
    int x, y, dist;
};

bool isWithinRange(int x, int y, int n, int m) {
    return x >= 0 && y >= 0 && x < n && y < m;
}

bool isSafe(int x, int y, int n, int m, vector<vector<int>>& forest, vector<vector<bool>>& visited, int d) {
    if (!isWithinRange(x, y, n, m) || forest[x][y] == 1 || visited[x][y]) return false;
    // Kiểm tra xem có thú dữ trong phạm vi d không
    for(int i = 0; i < n;i++ ){
        for(int j = 0; j < m; j++){
            if(forest[i][j] == 2){
                float distance = sqrt(pow(i - x, 2) + pow(j - y, 2));
                if(distance < float(d)) return false;
            }
        }
    }
    return true;
}

void reversePath(vector<Cell>& path) {
    int size = path.size();
    for (int i = 0; i < size / 2; ++i) {
        swap(path[i], path[size - i - 1]);
    }
}

vector<Cell> BFS(vector<vector<int>>& forest, int n, int m, int d, Cell start, Cell end) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<Cell> q;
    vector<vector<Cell>> parent(n, vector<Cell>(m));

    q.push(start);
    visited[start.x][start.y] = true;
    parent[start.x][start.y] = {-1, -1, 0};

    int rowNum[] = {-1, 0, 0, 1};
    int colNum[] = {0, -1, 1, 0};

    while (!q.empty()) {
        Cell curr = q.front();
        q.pop();

        if (curr.x == end.x && curr.y == end.y) {
            vector<Cell> path;
            while (!(curr.x == start.x && curr.y == start.y)) {
                path.push_back(curr);
                curr = parent[curr.x][curr.y];
            }
            path.push_back(start);
            reversePath(path);
            return path;
        }

        for (int i = 0; i < 4; i++) {
            int row = curr.x + rowNum[i];
            int col = curr.y + colNum[i];
            if (isSafe(row, col, n, m, forest, visited, d)) {
                visited[row][col] = true;
                parent[row][col] = curr;
                q.push({row, col, curr.dist + 1});
            }
        }
    }
    return {};
}

int main() {
    ifstream fin("Forest.inp");
    ofstream fout("Forest.out");

    int n, m, d, i1, j1, i2, j2;
    fin >> n >> m >> d >> i1 >> j1 >> i2 >> j2;

    vector<vector<int>> forest(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            fin >> forest[i][j];
        }
    }

    vector<Cell> path = BFS(forest, n, m, d, {i1 - 1, j1 - 1, 0}, {i2 - 1, j2 - 1, 0});

    if (!path.empty()) {
        fout << path.size() - 1 << endl;
        for (const Cell& cell : path) {
            fout << "(" << cell.x + 1 << "," << cell.y + 1 << ")";
            if (&cell != &path.back()) {
                fout << ", ";
            }
        }
    } else {
        fout << "Không tìm thấy đường đi an toàn." << endl;
    }

    fin.close();
    fout.close();
    return 0;
}
