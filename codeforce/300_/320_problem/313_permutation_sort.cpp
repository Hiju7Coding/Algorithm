#include<bits/stdc++.h>
using namespace std;
int n,p1,t,a[60];
int main()
{
	for(cin>>t;t--;)
	{
		cin>>n;
		p1=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]!=i)p1=1;
		}
		if(a[1]==1||a[n]==n)cout<<p1<<endl;
		else if(a[1]!=n||a[n]!=1)cout<<2<<endl;
		else cout<<3<<endl;
	}
}
//1525B