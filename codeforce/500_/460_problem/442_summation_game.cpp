#include<bits/stdc++.h>
using namespace std;
 
int main(){int t;cin>>t;while(t--)
{
    int n,k,x; int sum[200200],a[200200];
	cin>>n>>k>>x;
	
	for (int i=1;i<=n;i++) cin>>a[i];
	
	int ans=-2e9;
	sort(a+1,a+n+1);
	
	for (int i=1;i<=n;i++) sum[i]=sum[i-1]+a[i];
	for(int i=0;i<=k;i++) ans=max(ans,2*sum[max(n-i-x,0)]-sum[max(n-i,0)]);
	
	cout<<ans<<endl;
}
}
//1920B