#include <bits/stdc++.h>
using namespace std;
#define el '\n'
#define ll long long
#define ull unsigned long long
#define ii pair<int, int>
#define maxn 200010
#define fr front
#define re rear
#define fi first
#define se second
#define inf 1000000004
int r, n, m, c[maxn], d[maxn];
ll prefa[maxn], prefb[maxn], ans = 0;
ii a[maxn], b[maxn];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> r >> m >> n;
	for (int i = 0; i < m; ++i) {
		cin >> a[i].fi;
	}
	for (int i = 0; i < m; ++i) {
		cin >> a[i].se;
	}
	for (int j = 0; j < n; ++j) {
		cin >> b[j].fi;
	}
	for (int j = 0; j < n; ++j) {
		cin >> b[j].se;
	}
	sort(a, a+m); sort(b, b+n);
	for (int i = 0; i < m; ++i) {
		c[i] = a[i].fi;
	}
	for (int i = 0; i < n; ++i) {
		d[i] = b[i].fi;
	}
	prefa[m-1] = a[m-1].se; prefb[n-1] = b[n-1].se;
	for (int i = m-2; i >= 0; --i)
		prefa[i] = prefa[i+1]+a[i].se;
	for (int i = n-2; i >= 0; --i)
		prefb[i] = prefb[i+1]+b[i].se;
	for (int i = 0; i < m; ++i) {
	 	ll up1 = prefa[lower_bound(c, c+m, c[i]) - c];
	 	ll up2 = prefb[lower_bound(d, d+n, r - c[i]) - d];
	 	ans = max(ans, up1+up2);
	}	
	cout << ans << el;

	return 0;
}