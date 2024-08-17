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

#define set_f(a) fixed << setprecision(a)
#define sz(x) (int)x.size()
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
ll n;
void init(){
    in_n(n);vec a(n);
    ina_n(a, n);
}
// function

// solve
void solve(){
    init();
    if (n == 1) {
        cout << a[0] << "\n";
        return 0;
    }

    vec dp(n, 0);
    dp[0] = a[0];
    dp[1] = a[1];

    for_i(i, 2, n-1) {
        dp[i] = min(dp[i-1] + a[i], dp[i-2] + a[i]);
    }

    cout << min(dp[n-1], dp[n-2]) << el;
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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}