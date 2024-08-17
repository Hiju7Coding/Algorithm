#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; while(t--){
		string a,b; cin>>a>>b;
		int n=b.size();
		while(a.size()<n){
			a="0" + a;
		}
		int ans=0;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				ans=b[i]-a[i]+9*(n-1-i);
				break;
			}
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
//1834B