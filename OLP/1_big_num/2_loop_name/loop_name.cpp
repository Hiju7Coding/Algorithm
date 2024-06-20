#include <bits/stdc++.h>

using namespace std;

#define loop(i, l, r) for(int i = (int) l; i <= (int) r; i++)
#define rloop(i, r, l) for(int i = (int) r; i >= (int) l; i--)

#define sp ' '

const int maxn = 1e5 + 5;

int n;
int g[maxn][26]; int le[maxn]; 
int sum[maxn]; 
int d[maxn]; 
int sz[maxn]; 

multiset<int> s[maxn]; 

int cnt = 0; 
int ans = 0;
void add(string s) {
    int now = 0; 
    for(char c: s) {
        int e = c - 'a'; 
        if(g[now][e] == -1) {
            g[now][e] = ++cnt; 
        }
        now = g[now][e]; 
    }
    le[now] = 1; 
}

void dfs(int i) {
    if(le[i]) {
        sz[i] = 1; 
        s[i].insert(d[i]);
    }
    for(int j: g[i]) {
        if(j != -1) {
            d[j] = d[i] + 1; 
            dfs(j); 
            sz[i] += sz[j]; 
            sum[i] += sum[j] + sz[j]; 
            if(s[i].size() < s[j].size()) s[i].swap(s[j]); 
            for(int d: s[j]) {
                s[i].insert(d); 
            }
            s[j].clear(); 
        }
    }
    if(!le[i] and s[i].size() and i > 0) {
        auto it = prev(s[i].end()); 
        sum[i] -= *it - d[i]; 
        s[i].erase(it); 
        s[i].insert(d[i]); 
    }
}


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n; 
    loop(i, 0, maxn - 1) {
        fill(begin(g[i]), end(g[i]), -1); 
    }
    loop(i, 1, n) {
        string s; 
        cin >> s; 
        add(s); 
    }
    dfs(0); 
    cout << sum[0]; 
}