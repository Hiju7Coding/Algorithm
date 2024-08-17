#include<bits/stdc++.h>
using namespace std;
int t,n,k,ans,temp,a[200000];
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		temp=1;ans=1;
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]<=k)temp++;
			else temp=1;
			ans=max(ans,temp);
		}
		cout<<n-ans<<'\n';
	}
	return 0;
}
//1850D