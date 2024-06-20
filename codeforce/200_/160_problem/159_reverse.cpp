#include<bits/stdc++.h>
using namespace std;
int _,n,i,a[200001],p[200001];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>_;
	while(_--){
		cin>>n;
		for(i=1;i<=n;i++)cin>>a[i],p[a[i]]=i;
		for(i=1;i<=n;i++)if(a[i]!=i){reverse(a+i,a+p[i]+1);break;}
		for(i=1;i<=n;i++)cout<<a[i]<<" ";
		cout<<"\n";
	}
}
//1638A