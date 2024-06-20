#include <bits/stdc++.h>
using namespace std;
const int N=3e5+5;
int T,n,m,a[N];long long f[N][15];
int main() {
 cin>>T;
	while(T--){
        
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=m;i++)f[0][i]=1e18;
		for(int i=1;i<=n;i++){
			for(int j=0;j<=m;j++)f[i][j]=f[i-1][j]+a[i];
			for(int val=1e9,j=0;j<=min(i-1,m);j++){
				val=min(val,a[i-j]);
				for(int k=j;k<=m;k++)f[i][k]=min(f[i][k],f[i-j-1][k-j]+1ll*(j+1)*val);
			}
		}
		cout<<f[n][min(n-1,m)]<<"\n";
	}
}
//1969C