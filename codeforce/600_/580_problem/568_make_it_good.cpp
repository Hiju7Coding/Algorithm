#include<bits/stdc++.h>

using namespace std;
int i,n,t,a[200040];
main()
{
	for(cin>>t;t--;)
	{
		cin>>n;
		for(i=0;i++<n;)cin>>a[i];
		for(i=n;a[i]<=a[i-1];)i--;
		for(;i&&a[i]>=a[i-1];)i--;
		cout<<max(i-1,0)<<endl;
	}
}
//1385C