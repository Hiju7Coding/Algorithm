#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n;
map<int,ll>mp;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		ll ans=0;
		ll a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			ans+=mp[a[i]]++;
		}
		ans+=(ll)(mp[1]*mp[2]);
		cout<<ans<<endl;
		mp.clear();
	}
}
//1899D