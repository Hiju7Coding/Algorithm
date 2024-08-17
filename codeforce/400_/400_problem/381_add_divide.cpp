#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
	cin>>t;
	while(t--){
		int ans=1<<30;
		cin>>a>>b;
		for(int i=(b==1);i<=ans;i++){
			int ta=a,ts=i;
			while(ta) ta/=b+i,ts++;
			ans=min(ans,ts);
		}
		cout<<ans<<'\n';
	}
	return 0;
}
//1485A