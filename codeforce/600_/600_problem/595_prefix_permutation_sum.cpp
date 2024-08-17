#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,t;
	
	cin>>t;
	while(t--)
	{
		cin>>n;set<ll> b;
		ll s=(1+n)*n/2;
		ll x,l=0;
		for(int i=1;i<n;i++)
		{
			cin>>x;
			if(x-l<=n)
				b.insert(x-l);
			l=x;
		}
		if(b.size()==n-2+(x!=s))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
//1851D