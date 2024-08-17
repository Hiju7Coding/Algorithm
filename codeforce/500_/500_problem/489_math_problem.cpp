#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
	long long int n,i,j,a,b,x=0,y=10000000000000000;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		x=max(a,x);
		y=min(y,b);
	}
	if(x>y)cout<<x-y<<endl;
	else cout<<0<<endl;
}
}
//1227A