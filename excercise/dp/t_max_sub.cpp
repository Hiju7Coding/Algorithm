#include <bits/stdc++.h>

#define maxn 200005
#define ll long long
using namespace std;

ll x[maxn];
ll sum[maxn];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin >> n;
    
    for(ll i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    ll max_current = x[0];
    ll max_global = x[0];
    
    for(ll i = 1; i < n; i++) {
        max_current = max(x[i], max_current + x[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }
    
    cout << max_global;
    return 0;
}