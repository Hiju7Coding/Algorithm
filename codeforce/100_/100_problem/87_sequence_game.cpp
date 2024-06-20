#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t, n, p, a; for (cin >> t; t-- and cin >> n;) {
    vector<int> A;
    for (p = 0; n-- and cin >> a; A.push_back(p = a)) if (a < p) A.push_back(1);
    cout << A.size() << '\n'; for (auto a : A) cout << a << ' '; cout << '\n';
  }
}
//1862B