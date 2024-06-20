#include<bits/stdc++.h>
using namespace std;
long long t, A, B, n, mx, b, a[100005];
int main(){
	cin>>t;
	while(t--){
		cin>>A>>B>>n;
		for(long long i=1; i<=n; i++)
		cin>>a[i];
		mx=0;
		for(long long i=1; i<=n; i++){
			cin>>b;
			mx=max(mx, a[i]);
			B-=a[i]*((b+A-1)/A);
		}
		if(B+mx>=1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
//1480B