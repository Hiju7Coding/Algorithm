#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		a>b? cout<<"1"<<'\n': cout<<((n+a-1)/a)<<'\n';
	}
}
//1765E