#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=3e5+2;
int T,n,a,t[N];
signed main(){
	cin>>T;while(T--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a,++t[a];
		int ans=0;
		for(int i=0,sum=0;i<=n;i++){
			ans+=t[i]*(t[i]-1)*(t[i]-2)/6+t[i]*(t[i]-1)/2*sum;
			sum+=t[i],t[i]=0;
		}
		cout<<ans<<'\n';
	}
}
//1922B