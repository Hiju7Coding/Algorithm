#include <bits/stdc++.h>

#define ll long long
#define maxn 200005
using namespace std;
bool cow(vector<ll>& pos, ll n, ll c, ll minDist) {
    ll count = 1; 
    ll lastPos = pos[0];
    
    for (ll i = 1; i < n; i++) {
        if (pos[i] - lastPos >= minDist) {
            count++;
            lastPos = pos[i];
            if (count == c) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, c;
    cin >> n >> c;
    vector<ll> pos(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> pos[i];
    }
    
    sort(pos.begin(), pos.end());
    
    ll lo = 1, hi = pos[n-1] - pos[0];
    ll best = 0;
    
    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (cow(pos, n, c, mid)) {
            best = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    
    cout << best << "\n";
    return 0;
}