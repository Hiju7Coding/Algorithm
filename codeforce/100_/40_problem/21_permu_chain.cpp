#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            p[i] = i + 1;
        }
        cout << n << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << p[j] << " ";
            }
            cout << endl;
            if (i < n - 1) {
                swap(p[i], p[i + 1]);
            }
        }
    }
    return 0;
}
// 1716B
