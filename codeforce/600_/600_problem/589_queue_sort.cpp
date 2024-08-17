#include <bits/stdc++.h>
using namespace std;
int a[200005];
void solve(){
	int n;scanf("%d",&n);
	int minp=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]<a[minp]||minp==0)minp=i;
	}
	for(int i=minp+1;i<=n;i++)
		if(a[i]<a[i-1]){
			printf("-1\n");
			return;
		}
	printf("%d\n",minp-1);
}
int main(){
	int T;scanf("%d",&T);
	while(T--){
		solve();
	}
}
//1899E