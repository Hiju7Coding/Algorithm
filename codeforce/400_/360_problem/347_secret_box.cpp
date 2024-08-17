#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll x,y,z,v;
		cin>>x>>y>>z>>v;
		ll cnt=0;
		for(int i=1;i<=x;i++){
			for(int j=1;j<=y;j++){
				if(v%(i*j)==0){
					ll k=v/(i*j);
					cnt=max(cnt,(x-i+1)*(y-j+1)*(z-k+1));
				}
			}
		}
		cout<<cnt<<endl;
	}
}
//1985E