#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, b, d;
        cin >> r >> b >> d;
        if (min(r, b) * (d + 1LL) >= max(r, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
//1519A