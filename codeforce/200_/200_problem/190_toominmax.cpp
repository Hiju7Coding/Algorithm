#include<bits/stdc++.h>
using namespace std;
 
int t,n,a[101];
 
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		cout<<(a[n]+a[n-1]-a[1]-a[2]<<1)<<"\n";
	}
}
//1934A