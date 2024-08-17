#include<bits/stdc++.h>
using namespace std;
int t;
int n,m,ans,k;
char s[505][505];
int w[505][505];
int main() {
	cin>>t;
	while(t--) {
		ans=0;k=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++) scanf("\n%s",s[i]+1);
		for(int i=1;i<=n;i++) 
			for(int j=1;j<=m;j++) ans+=(w[i][j]=s[i][j]-'0');
		for(int i=1;i<n;i++)
			for(int j=1;j<m;j++) 
				k=max(k,min(4-w[i][j]-w[i+1][j]-w[i][j+1]-w[i+1][j+1],2));
		printf("%d\n",ans+k-2);
	}
}
//1720C