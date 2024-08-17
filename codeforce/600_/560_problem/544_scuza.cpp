#include<bits/stdc++.h>
using namespace std;
int a[200005];
long long b[200005];
int main()
{
	int T,i,x,n,q;

	for(cin>>T;T--;)
	{
		cin>>n>>q;
		for(i=1;i<=n;++i)
			cin>>x,a[i]=max(a[i-1],x),b[i]=b[i-1]+x;
		while(q--)
		{
			cin>>x;
			cout<<b[upper_bound(a+1,a+n+1,x)-a-1]<<' ';
		}
		cout<<'\n';
	}

	return 0;
}


//1742E