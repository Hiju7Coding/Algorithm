#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		long long ans(0);
		cin>>n>>s,s=" "+s;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;i*j<=n&&s[i*j]!='1';j++)ans+=(s[i*j]=='0')*i,s[i*j]=0;
		}
		printf("%lld\n",ans);
	}
}
//1734C