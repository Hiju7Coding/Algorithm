#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,x,y;
		cin>>a>>b>>c>>x>>y;
		if (c>=max(x-a,0)+max(y-b,0)) cout<<"YES\n"; else cout<<"NO\n";
	}
	return 0;
}
//1675A