#include<bits/stdc++.h>
using namespace std;
int main(){
	long long ans=0,a[300001],b,c,d,n,i,k,m,j;
	cin>>n;
	for(i=1; i<=n; i++){
		cin>>a[i];
		ans+=a[i];
	}
	sort(a+1,a+n+1);
	cin>>m;
	for(i=1; i<=m; i++){
		cin>>k;
		cout<<ans-a[n-k+1]<<endl;
	}
}
//1132B