#include<stdio.h>
int a[50005];
int T,n,cnt;
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);cnt=0;
		for(int i=1;i<=n;++i){
			scanf("%d",&a[i]);
			if(a[i-1]>a[i])++cnt;
		}puts(cnt==n-1?"NO":"YES");
	}
	return 0;
}
//1420A