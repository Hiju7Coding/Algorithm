#include<bits/stdc++.h>
using namespace std;
int i,k,n,t,a[100005];
main()
{
	for(cin>>t;t--;)
	{
		cin>>n;
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(k=(n-1)/2,i=0;i<n;i++)
		{
			if(i&1)cout<<a[k+(i+1)/2]<<' ';
			else cout<<a[k-i/2]<<' ';
		}
		cout<<endl;
	}
}
//1339B