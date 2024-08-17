#include <bits/stdc++.h>
using namespace std;
long long n,x,t,m,k;
int main(){
    cin>>k;
	while(k--){
		cin>>n>>x>>t;
		m=min(t/x,n);
		cout<<m*(2*n-1-m)/2<<endl;
	}
}
//1539A