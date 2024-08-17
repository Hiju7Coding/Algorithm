#include<bits/stdc++.h>
using namespace std;const int N=1e5+7;
#define int long long
int i,j,k,T_T,n,m,a[N],b[N],res;map<int,int>mp;
signed main(){
	for(cin>>T_T;T_T--;){
		for(mp.clear(),cin>>n>>m,res=m,i=1;i<=n;++i)cin>>a[i];
		for(i=1;i<=n;++i)cin>>b[i],mp[b[i]]+=a[i];n--;
		for(auto [x,y]:mp){
			k=min(y,n);n-=k;res+=min(m,x)*k;
		}cout<<res<<endl;
	}
}
//1876A