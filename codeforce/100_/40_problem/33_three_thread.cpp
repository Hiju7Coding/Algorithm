#include <bits/stdc++.h>
using namespace std;
int main(){
	long long q;
	cin>>q;
	while(q--){
		long long a,b,c,x;
		cin>>a>>b>>c;
		x=__gcd(a,__gcd(b,c));
		if((a/x+b/x+c/x-3)<=3)cout<<"YES\n";
		else cout<<"NO\n";
	}
}