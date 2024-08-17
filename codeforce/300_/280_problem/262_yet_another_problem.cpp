#include <stdio.h>
int _, n, a, cnt[2];
int main() {
	for(scanf("%d", &_); _--; cnt[0]=cnt[1]=0) {
		scanf("%d", &n);
		for(int i=0; i<n; i++) scanf("%d", &a), cnt[a&1]++;
		puts(!cnt[0] || !cnt[1] ? "YES" : "NO");
	}
}
//1324A