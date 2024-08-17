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
    
}
// function

// solve
void solve(){
    in_n(n);
    vec a(n);
    ina_n(a, n);
    vec lis;
    for_i(i, 0, n-1) {
        auto it = lb(all(lis), a[i]);
        if (it == lis.end()) {
            lis.pb(a[i]);
        } else {
            *it = a[i];
        }
    }

    cout << lis.size();
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

