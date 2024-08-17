#include<bits/stdc++.h>
using namespace std;
int i,k,n,t,x,a[240];
main()
{
	for(cin>>t;t--;)
	{
		cin>>n>>x;
		for(;n--;)
		{
			cin>>k;
			a[k]++;
		}
		for(i=1;~x;i++)
		{
			x-=!a[i];
		}
		cout<<i-2<<endl;
		for(i=0;i++<100;)a[i]=0;
	}
}
//1330A