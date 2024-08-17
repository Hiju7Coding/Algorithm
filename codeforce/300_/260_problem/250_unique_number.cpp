#include<bits/stdc++.h>
int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		int n,ans=0,p=1;
		scanf("%d",&n);
		for(int i=9;i;i--) if(n>=i) n-=i,ans+=p*i,p*=10;
		if(n) printf("-1\n");
		else printf("%d\n",ans);
	}
	return 0;
}
//1462C