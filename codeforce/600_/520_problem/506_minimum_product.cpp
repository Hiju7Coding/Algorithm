#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		long long a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		cout<<min(max(x,a-n+b-max(y,b-n))*max(y,b-n),max(x,a-n)*max(y,b-n+a-max(x,a-n)))<<endl;
	}
	
}
//1409B