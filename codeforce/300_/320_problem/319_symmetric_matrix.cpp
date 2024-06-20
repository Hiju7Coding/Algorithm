#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,m,n,p,t;
main()
{
	for(cin>>t;t--;p=0)
	{
		for(cin>>n>>m;n--;)
		{
			cin>>a>>b>>c>>d;
			if(b==c)p++;
		}
		if(p&&~m&1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
// 1426B