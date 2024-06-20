#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		int l=n;
		while(a[n]==a[l]) l--;
		if(!l){
			cout<<"-1\n";
			continue;
		}
		cout<<l<<' '<<n-l<<endl;
		for(int i=1;i<=l;i++) cout<<a[i]<<' ';
		cout<<endl;
		for(int i=l+1;i<=n;i++) cout<<a[i]<<' ';
		cout<<endl;
 	}
}
//1859A