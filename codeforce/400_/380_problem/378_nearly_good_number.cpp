#include<bits/stdc++.h>
using namespace std;
long long t,a,b;
int main(){
	cin>>t;while(t--){
		cin>>a>>b;if(b==1)cout<<"NO\n";
		else cout<<"YES\n"<<a*b<<" "<<a<<" "<<a*b+a<<"\n";
	}
	return 0;
}
//1521A