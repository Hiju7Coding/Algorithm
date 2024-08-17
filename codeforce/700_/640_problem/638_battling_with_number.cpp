#include<bits/stdc++.h>
using namespace std;
int t[2000010],a[2000010],b[2000010],n,m;
int main(){
	cin>>n;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1,x;i<=n;++i)cin>>x,t[a[i]]+=x;
	cin>>m;
	for(int i=1;i<=m;++i)cin>>b[i];
	long long ans=1;
	for(int i=1,x;i<=m;++i)cin>>x,t[b[i]]-=x;
	for(int i=1;i<=2000000;++i)if(t[i]<0)return cout<<"0\n",0;else if(t[i])ans<<=1,ans%=998244353;
	cout<<ans<<'\n';
	return 0;
}
//1866B