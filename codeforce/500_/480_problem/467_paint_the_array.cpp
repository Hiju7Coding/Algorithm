#include <bits/stdc++.h>
#define ll long long
#define md 1000000007
using namespace std;

int main(){
	
	ll T,k;
	cin>>T;
	for(k=0;k<T;k++){
		ll n,i,a[101],j,hcf,val=0;
		cin>>n;
		
		for(i=1;i<=n;i++) cin>>a[i];
		
		for(j=0;j<2;j++){
			
			hcf=0;
		for(i=1+j;i<=n;i+=2){
			hcf = __gcd(hcf,a[i]);
		}
		
		for(i=1;i<=n;i++)
			if(i+1<=n && a[i]%hcf==a[i+1]%hcf) break;
		
		if(i==n+1) val=hcf;
		
		}
		
		cout<<val<<"\n";
		
	}
	return 0;
}
//1618C