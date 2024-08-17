#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
int main(){
    int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		sort(a+1,a+n+1);
		if(n==1||a[n]==a[1]) {cout<<"0\n";continue;}
		int cnt=log2(a[n]-a[1])+1;
		cout<<cnt<<'\n';
		if(cnt<=n){
			for(int i=1;i<=cnt;i++) cout<<a[1]<<' ';
			cout<<'\n';
		}
	}
}
//1901C