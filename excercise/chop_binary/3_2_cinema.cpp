#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin >> n;
    vector<pair<ll, ll> > couple(n);
    for(ll i = 0; i < n; i++) {
        cin >> couple[i].first >> couple[i].second;
    }
    sort(couple.begin(), couple.end());
    multiset<ll> wife;
    
    for (const auto& c : couple) {
        auto it = wife.upper_bound(c.second);
        if (it != wife.begin()) {
            --it;
            wife.erase(it);
        }
        wife.insert(c.second);
    }
    cout << wife.size() << "\n";

    return 0;
}