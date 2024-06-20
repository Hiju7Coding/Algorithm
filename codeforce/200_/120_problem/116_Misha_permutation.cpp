#include <bits/stdc++.h>
using namespace std;
 
const int N = 2e5 + 5;
int n, a[N], cnt[N], fen[N], m = 2;
 
int get(int x) {
	int res = 0;
	for (; x; x -= x & -x)
		res += fen[x];
	return res;
}
 
void add(int x) {
	for (; x < N; x += x & -x)
		fen[x]++;
}
 
int ask(int x) {
	int l = 0, r = n + 1;
	while (r - l > 1) {
		int mid = l + r >> 1;
		int t = mid - get(mid) - 1;
		t >= x? r = mid: l = mid;
	}
	return r - 1;
}
 
int main() {
	cin >> n;
	while (m--) {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			cnt[n - i  - 1] += a[i] - get(++a[i]);
			add(a[i]);
		}
		memset(fen, 0, sizeof fen);
	}
	for (int i = 0; i < n; i++) {
		cnt[i + 1] += cnt[i] / (i + 1);
		cnt[i] %= i + 1;
	}
	for (int i = n - 1; ~i; i--) {
		int ans = ask(cnt[i]);
		cout << ans << ' ';
		add(ans + 1);
	}
}
//501D