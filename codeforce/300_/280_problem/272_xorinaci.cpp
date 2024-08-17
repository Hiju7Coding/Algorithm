#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,n;
		cin>>a>>b>>n;
		int ans[]={a,b,a^b};
		cout<<ans[n%3]<<'\n';
	}
}
//1208A