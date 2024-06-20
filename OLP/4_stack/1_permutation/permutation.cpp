#include <iostream>
#include <stack>
using namespace std;

#define MAX 10

struct State {
    int k;
    int a[MAX];
    bool Bool[MAX];
};

int main() {
    int n = 3;
    int count = 0;
    stack<State> states;
    State initial = {1, {0}, {false}};
    states.push(initial);

    while (!states.empty()) {
        State current = states.top();
        states.pop();
        int k = current.k;

        if (k == n + 1) {
            count++;
            for (int i = 1; i <= n; i++) {
                printf("%5d", current.a[i]);
            }
            cout << endl;
        } else {
            for (int i = 1; i <= n; i++) {
                if (!current.Bool[i]) {
                    State next = current;
                    next.a[k] = i;
                    next.Bool[i] = true;
                    next.k++;
                    states.push(next);
                }
            }
        }
    }

    cout << "\n So luong hoan vi: " << count << endl;
    return 0;
}
