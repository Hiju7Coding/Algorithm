#include<bits/stdc++.h>
using namespace std;
long long t,b,ans,n,m,a[200010];
int main(){
	cin>>t;
	while(t--){
		ans=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		cin>>m;
		for(int i=1;i<=m;i++) cin>>b,ans+=b;
		ans=ans%n+1;
		cout<<a[ans]<<endl;
	}
}
//1681B