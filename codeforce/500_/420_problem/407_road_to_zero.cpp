#include <bits/stdc++.h>
using namespace std;

long long x,y,t,a,b;
int main(){
	cin>>t;
	while(t--){
		cin>>x>>y>>a>>b;
		cout<<min(b*min(x,y)+abs(x-y)*a,x*a+a*y)<<endl;
	}
	return 0;
}
//1342A