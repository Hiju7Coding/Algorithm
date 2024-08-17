#include<bits/stdc++.h>
using namespace std;
int t;
const int ma=4e5+10;
int n;
int as[ma];
int main(){
	cin>>t;
	while(t--){
	int n,v1,p=-1,ans=0,sam=1;
	cin>>n;
	int a[2*n+5]={};
	for(int i=0;i<n;i++){
		cin>>v1;
		if(v1==p)sam++;
		else sam=1;
		a[v1]=max(a[v1],sam);
		p=v1;
	}
	p=-1;
	sam=1;
	for(int i=0;i<n;i++){
		cin>>v1;
		if(v1==p)sam++;
		else sam=1;
		ans=max(ans,sam+a[v1]);
		p=v1;
	}
	for(int i=0;i<=2*n;i++)ans=max(ans,a[i]);
	cout<<ans<<'\n';
	}}
//1831B