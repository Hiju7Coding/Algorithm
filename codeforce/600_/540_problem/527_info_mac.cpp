#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001][2];
int main(){
	int T;scanf("%d",&T);
	while(T--){
		int n;scanf("%d",&n);
		for(int i=0;i<n;i++){
			b[i][0]=0;b[i][1]=0;
		}
		for(int i=1;i<=n;i++){
			scanf("%d",a+i);
			b[a[i]][1]=i;
			if(!b[a[i]][0])b[a[i]][0]=i;
		}
		int l=1,r=n;
		for(int i=0;i<n&&b[i][0]&&l<r;i++){
			l=max(l,b[i][0]);r=min(r,b[i][1]);
		}
		if(l<r)printf("2\n1 %d\n%d %d\n",l,l+1,n);
		else puts("-1");
	}
	return 0;
}
//1935B