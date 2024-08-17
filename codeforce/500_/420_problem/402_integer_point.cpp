#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,m,i,a,ev,od,c;
	cin>>t;
	while(t--){
		c=0;
		ev=0;
		od=0;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a;
			a%2 ? ++od : ++ev;
		}
		cin>>m;
		for(i=0;i<m;i++){
			cin>>a;
			a%2 ? c+=od : c+=ev;
		}
		cout<<c<<"\n";
	}
}
//1248A