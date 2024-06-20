#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t, n, a, b, s; cin >> t; while (t--) {
    cin >> n >> a;
    for (s = 0; --n; a = b) {cin >> b; if (b < a) s = max(s, a);}
    cout << s << '\n';
  }
}
//1856A