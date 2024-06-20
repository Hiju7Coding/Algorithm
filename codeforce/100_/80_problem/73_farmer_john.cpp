#include<bits/stdc++.h>
using namespace std;
int n,k;
int t;
int main() {
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(k==1)for(int i=1;i<=n;i++)cout<<i<<' ';
		else if(k==n)for(int i=1;i<=n;i++)cout<<1<<' ';
		else cout<<-1;
		cout<<endl;
	}
}
//1942A