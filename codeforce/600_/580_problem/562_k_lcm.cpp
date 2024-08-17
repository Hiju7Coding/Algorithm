#include<bits/stdc++.h>

using namespace std;
int k,n,t;
main()
{
	for(cin>>t;t--;)
	{
		cin>>n>>k;
		if(n%2)cout<<n/2<<' '<<n/2<<' '<<1<<endl;
		else if(n%4)cout<<n/2-1<<' '<<n/2-1<<' '<<2<<endl;
		else cout<<n/2<<' '<<n/4<<' '<<n/4<<endl;
	}
}
//1497C1