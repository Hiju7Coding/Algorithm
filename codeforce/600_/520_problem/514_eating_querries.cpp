#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n, q;
		scanf("%d%d",&n,&q);
		int a[n];
		for (int i = 0; i < n; i++) scanf("%d",&a[i]);
		sort(a, a + n, greater<int>());
		for (int i = 1; i < n; i++) a[i] += a[i - 1];
		while (q--) {
			int x;
			scanf("%d",&x);
			if (a[n - 1] < x) printf("%d\n",-1);
			else printf("%d\n",lower_bound(a, a + n, x) - a + 1);
		}
	}
}
//1676E