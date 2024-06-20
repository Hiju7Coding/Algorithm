#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,n,k,b,a,c;cin>>t;
	while(t--){
		c=1;cin>>n>>k;a=k-1;
		while(n--){
			cin>>b;
			c=c*b;
		}
		if(2023%c==0){
			cout<<"YES"<<endl;cout<<2023/c<<endl;
			while(a--)cout<<"1"<<endl;
		}else cout<<"NO"<<endl;
	}
}
//1916A