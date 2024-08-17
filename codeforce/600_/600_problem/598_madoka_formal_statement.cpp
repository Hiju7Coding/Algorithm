#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[200020],b[200020];
signed main(){
	cin>>t;
	while(t--){
		cin>>n;
		int f=1;
		for(int i=0;i<n;i++) cin>>b[i];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) if((a[i]-a[(i+1)%n]>1&&a[i]!=b[i])||a[i]<b[i]) f=0;
		puts(f?"Yes":"No");
	}
	return 0;
}
//1717C