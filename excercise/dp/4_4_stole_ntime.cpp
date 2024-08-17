#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re0 return 0;

#define maxN1 100005
#define maxN2 200005
#define INF 1e9
#define MOD 1000000007

#define db double
#define ll long long
#define ull unsigned long long
#define vec vector<ll>
#define mus multiset<ll>
#define pll pair<ll, ll>
#define mus_p multiset<pll>

#define el '\n'
#define fi first
#define se second

#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound

#define set_f(a) fixed << setprecision(a)
#define sz(x) x.size()
#define sz_str(s) s.length()

#define all(x) x.begin(), x.end()

#define for_i(i, a, b) for (ll i = a; i <= b; i++)
#define for_d(i, a, b) for (ll i = a; i >= b; i--)
#define whl(t) while(t--)

#define in_n(n) cin >> n;
#define in_ab(a, b) cin >> a >> b;
#define ms(a, x) memset(a, x, sizeof(a));
#define ina_n(a, n) for_i(i, 0, n-1) cin >> a[i];
#define ina_nm(a, n, m) for_i(i, 0, n-1) for_i(j, 0, m-1) cin >> a[i][j];

#define out_n(n) cout << n << el;
#define out_ab(a, b) cout << a << ' ' << b << el;
#define output_i(a, n) for_i(i, 0, n-1) cout << a[i] << ' ';
#define output_d(a, n) for_d(i, 0, n-1) cout << a[i] << ' ';
#define output_n(a, n, m) for_i(i, 0, n-1) {output(a[i], m); cout << el;}

using namespace std;

// init variables
ll n,a[maxN2];
void init(){
    in_n(n);
    ina_n(a, n);
}
// function
ll total(ll a[], int n) {
    if (n == 0) re0
    if (n == 1) return a[0];
    if (n == 2) return a[0] + a[1];

    vector<vec> dp(n, vec(2, 0));

    dp[0][0] = a[0];
    dp[0][1] = a[0]; 
 
    dp[1][0] = a[0] + a[1];
    dp[1][1] = a[1]; 
    ll mx = 0;
    for_i(i, 2, n-1) {
        dp[i][0] = dp[i-1][1] + a[i]; 
        dp[i][1] = max(dp[i-2][1], dp[i-2][0])+a[i]; 

        mx = max(mx, dp[i][0]);
        mx = max(mx, dp[i][1]);
    }
    return mx;
}
// solve
void solve(){
    init();
    cout << total(a, n) << el;
}
int main() {
    fast
    if (fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    solve();
    re0;
}

