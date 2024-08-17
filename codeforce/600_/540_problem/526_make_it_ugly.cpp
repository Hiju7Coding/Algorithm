#include<bits/stdc++.h>
using namespace std;
int t,n,a[300005]; 
int main(){
	cin>>t;
	while(t--){
		cin>>n;
 		int cnt=0,ans=1e9;
		for(int i=0;i<n;i++) {
			cin>>a[i]; 
			if(a[i]==a[0]){
 				cnt++;
			}
			else 
				ans=min(ans,cnt),cnt=0;
		}
 		ans=min(ans,cnt);
		if(ans==n) 
			ans=-1;
		cout<<ans<<endl;
	} 
}
//1954B