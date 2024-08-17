#include <bits/stdc++.h>

#define maxn 200005
#define ll long long
#define el '\n'
using namespace std;

ll n, median;
vector<ll> p;
ll ans, cnt;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
	p.resize(n);
	for (ll &x : p) cin >> x;
	sort(p.begin(), p.end());
	median = p[n / 2];
	for (const int &x : p) {
		ans += abs(median - x);  
	}
	cout << ans << "\n";
    return 0;
}