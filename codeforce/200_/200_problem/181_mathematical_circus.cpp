#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;k%=4;
		if(k==0){cout<<"NO\n";continue;}
		cout<<"YES\n";
		for(int i=1;i<=n;i+=2)
			if(k==2&&i%4!=3) cout<<i+1<<' '<<i<<'\n';
			else cout<<i<<' '<<i+1<<'\n';
	}
}
//1719B