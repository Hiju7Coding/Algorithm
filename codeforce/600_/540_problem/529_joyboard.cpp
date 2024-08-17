#include<bits/stdc++.h>
using namespace std;
int t,n,m,k;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		if(k>3)cout<<"0\n";
		else if(k==1)cout<<"1\n";
		else if(k==2)cout<<min(m,m/n+n-1)<<endl;
		else cout<<max(0,m-m/n-n+1)<<endl;
	}
	return 0;
}
//1877C