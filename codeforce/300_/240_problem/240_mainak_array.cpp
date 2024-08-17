#include<bits/stdc++.h>
using namespace std;
int t,n,a[20005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		int ans=0;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]-a[1]);
			ans=max(ans,a[n]-a[i]);
			ans=max(ans,a[i]-a[i%n+1]);
		}
		cout<<ans<<endl;
	}
}
//1726A