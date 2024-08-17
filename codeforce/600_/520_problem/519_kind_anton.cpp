#include<bits/stdc++.h>
using namespace std;
int t,n,a[100005],b[100005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int l=0,r=0,u=1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]==1&&!l)l=i;
			if(a[i]==-1&&!r)r=i;
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
			if(b[i]>a[i]&&(l>=i||!l))u=0;
			if(b[i]<a[i]&&(r>=i||!r))u=0;
		}
		if(u)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
//1333B