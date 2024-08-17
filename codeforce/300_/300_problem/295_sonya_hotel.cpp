#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,x,n,m,d,ans=0;
	cin>>n>>d>>m;
	for(i=1;i<n;i++)
	{
		cin>>x;
		if(x-d-m==d) ans++;
		else if(x-d-m>d) ans+=2;
		m=x;
	}
	cout<<ans+2;
	return 0;
}
//1004A