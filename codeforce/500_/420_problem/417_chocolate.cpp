#include<bits/stdc++.h>
using namespace std;
long long n, k=2000000000, a[200050], ans;
main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=n;i>0;i--)
	{
		k=min(k-1, a[i]);
		if(k<0) k=0;
		ans+=k;
	}
	cout<<ans;
}
//1139B