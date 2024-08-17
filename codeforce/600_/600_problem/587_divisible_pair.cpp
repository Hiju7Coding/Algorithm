#include<bits/stdc++.h>
using namespace std;
long long n,x,y,c,i;
main(){
	int t=1;
	cin>>t;
	while(t--){
	cin>>n>>x>>y;
	int a[n];
	map<int,map<int,int>>m;
	for(i=c=0;i<n;){
		cin>>a[i];
		c+=m[(x-a[i]%x)%x][a[i]%y];
		m[a[i]%x][a[i++]%y]++;
	}
	cout<<c<<'\n';
	}
}
//1931D