#include <bits/stdc++.h>
using namespace std;
int t, n, m, i, j;
main(){
  for (cin >> t; cin >> n >> m;){
    string s[n];
    bitset<666> r, c;
    for (auto &x : s)
      cin >> x;
    for (i = 0; i < n; i++)
      for (j = 0; j < m; j++)
        if (s[i][j] == 'L')
          c.flip(j), s[i][j] = "WB"[c[j]], s[i][j+1] = "BW"[c[j]];
        else if (s[i][j] == 'U')
          r.flip(i), s[i][j] = "WB"[r[i]], s[i+1][j] = "BW"[r[i]];
    if (r.any() | c.any())
      cout << "-1\n";
    else
      for (auto x : s)
        cout << x << endl;
  }
}
//1863D