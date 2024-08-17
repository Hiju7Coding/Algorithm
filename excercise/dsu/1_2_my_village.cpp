#include <bits/stdc++.h>
using namespace std;

#define maxn 200001

int sz[maxn];
int parent[maxn];
set<pair<int,int>> vil[maxn];

void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
    vil[v].insert({v, v});
}

int find_set(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}

void update_vil(int a, int b) {
    for (auto it : vil[b]) {
        auto it_next = vil[a].upper_bound(it);
        if (it_next != vil[a].begin()) {
            auto it_prev = prev(it_next);
            if (it_prev->second + 1 == it.first) {
                if (it_next != vil[a].end() && it.second + 1 == it_next->first) {
                    vil[a].insert({it_prev->first, it_next->second});
                    vil[a].erase(it_prev);
                    vil[a].erase(it_next);
                } 
                else {
                    vil[a].insert({it_prev->first, it.second});
                    vil[a].erase(it_prev);
                }
            } 
            else if (it_next != vil[a].end() && it.second + 1 == it_next->first) {
                vil[a].insert({it.first, it_next->second});
                vil[a].erase(it_next);
            } 
            else vil[a].insert(it);
        } 
        else {
            if (it_next != vil[a].end() && it.second + 1 == it_next->first) {
                vil[a].insert({it.first, it_next->second});
                vil[a].erase(it_next);
            } 
            else vil[a].insert(it);
        }
    }
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
        update_vil(a, b);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        make_set(i);
    }

    while (q--) {
        int nq, u, v;
        cin >> nq >> u;

        if (nq == 1) {
            cin >> v;
            union_sets(u, v);
        } 
        else if (nq == 2) {
            int v = find_set(u);
            cout << sz[v] << '\n';
        } 
        else if (nq == 3) {
            int pa = find_set(u);
            auto it_first = vil[pa].begin();
            auto it_second = next(it_first);
            if (it_second == vil[pa].end()) {
                if (it_first->second != n) cout << it_first->second + 1 << '\n';
                else {
                    if (it_first->first != 1) cout << it_first->first - 1 << '\n';
                }
            } else {
                if (it_first->first == 1) {
                    if (it_first->second + 1 == it_second->first - 1 && it_second->second != n) cout << it_second->second + 1 << '\n';
                    else cout << it_second->first - 1 << '\n';
                } else cout << it_first->second + 1 << '\n';
            }
        }
    }
    return 0;
}
