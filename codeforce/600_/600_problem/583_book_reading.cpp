#include <bits/stdc++.h>
using namespace std;
 
main()
{
	int q; cin>>q;
	while (q--)
	{
		int64_t n,m,p=0,i,m10,ans=0; cin>>n>>m; m10=m*10;
		for (i=m; i<m10; i+=m) p+=i%10;
		ans=n/m10*p;
		for (i=m; i<=n%m10; i+=m) ans+=i%10;
		cout<<ans<<"\n";
	}
}
//1213C