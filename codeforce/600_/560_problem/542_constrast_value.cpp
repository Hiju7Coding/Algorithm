#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,x,r,u,v;
		cin>>n>>x;
		u=-2,a=1,r=x;
        n--;
		while(n--){
			cin>>x;
			if(x>r)v=1;
			else if(x<r)v=-1;
			else continue;
			if(u!=v)a++;
			u=v,r=x;
		}
		cout<<a<<endl;
	}
	return 0;
}
//1832C