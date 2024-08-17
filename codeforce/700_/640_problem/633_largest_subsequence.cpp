#include<bits/stdc++.h>

using namespace std;

int q, n;
string s;

void solve() {
    cin >> n >> s;
    string ss = s;
    vector<int> v;
    for (int i = n - 1; i >= 0; i--) if (v.empty() || s[i] >= s[v.back()]) v.emplace_back(i);
    int ans = v.size();
    vector<int> vv = v;
    reverse(vv.begin(), vv.end());
    for (auto &e: vv) if (s[vv.front()] == s[e]) ans--; else break;
    for (int i = 0; i < v.size(); i++) ss[v[i]] = s[vv[i]];
    cout << (is_sorted(ss.begin(), ss.end()) ? ans : -1) << '\n';
}

int main() {
    cin >> q;
    while (q--) solve();
}

//1905C