#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int t,n,x,mn,a[N],b[N],ans;
signed main() {
	cin>>t;
	while (t--){
		cin>>n; ans=1;
		for (int i=1; i<=n; i++){
			cin>>a[i];
		}
		for (int i=1; i<=n+1; i++){
			cin>>b[i]; 
		} mn=1e18;
		for (int i=1; i<=n; i++){
			ans+=abs(a[i]-b[i]);
			mn=min(mn,(abs(a[i]-b[n+1])+abs(b[i]-b[n+1])-abs(a[i]-b[i]))/2);
		}
		cout<<ans+mn<<"\n";
	}
}
//1976B