#include<bits/stdc++.h>
const int N=3e5+5;
int T,n,a[N];
long long s;
int main(){
	for(scanf("%d",&T);T--;){
		scanf("%d",&n),s=0;
		for(int i=1;i<=n;++i)scanf("%d",a+i);
		for(int i=2;i<=n;i+=2)s+=a[i]-a[i-1];
		puts(n&1||s>=0?"YES":"NO");
	}
	return 0;
}
//1815A