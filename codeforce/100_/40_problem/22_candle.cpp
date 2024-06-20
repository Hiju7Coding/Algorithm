#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int it = 0; it < t; ++it) {
        int a, b;
        cin >> a >> b;
        cout << (a == 0 ? 1 : a + 2 * b + 1) << '\n';
    }
    return 0;
}
//1660A