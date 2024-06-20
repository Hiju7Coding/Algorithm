#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k,x; cin>>n>>k>>x;
		if(x!=1){
			cout<<"YES\n";
			cout<<n<<'\n';
			for(int i=1;i<=n;i++) cout<<1<<" ";
			cout << '\n';
		}
		else if((n%2 && k==2) || k==1) cout<<"NO\n";
		else{
			cout<<"YES\n";
			cout<<n/2<<'\n';
			for(int i=1;i<n/2;i++) cout<<2<<" ";
			cout<<2+(n%2)<<'\n';
		}
	}
}
//1845A