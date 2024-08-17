#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re0 return 0

#define max_n 200005
#define INF 1e9
#define MOD 1000000007

#define db double
#define ll long long
#define ull unsigned long long

#define el '\n'

#define fi first
#define se second

#define pb push_back
#define mp make_pair

#define sz(x) (int)x.size()
#define sz_str(s) s.length()
#define all(x) x.begin(), x.end()
#define for_i(i, a, b) for (ll i = a; i <= b; i++)
#define for_d(i, a, b) for (ll i = a; i >= b; i--)
#define whl(t) while(t--)
#define input(a, n) for_i(i, 0, n-1) cin >> a[i];

#define vec vector<ll>
#define mus multiset<ll>
#define mus_p multiset<pair<ll, ll>>

using namespace std;

ll n;
ll dp[max_n];
int main() {
    fast
    string s;cin >> s;
    n = sz_str(s);
    dp[0] = s[0] % 2 == 0 ? 1 : 0;
    for_i(i, 1, n-1) {
        if((s[i] - '0') % 2 == 0) {
            dp[i] = dp[i-1] + i + 1;
        } else {
            dp[i] = dp[i-1];
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll r;
        cin >> r;
        cout << dp[r] << el;
    }
    re0;
}