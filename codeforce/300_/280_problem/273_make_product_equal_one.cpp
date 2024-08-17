#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main()
{
	ll n;cin>>n;
	ll t,cn=n,o=0,s=0,c=0;
	while(cn--)
	{
		cin>>t;s+=(abs(abs(t)-1));
		if(t<0)o++;
		if(t==0)c++;
	}
	if(o%2 && c==0)s+=2;
	cout<<s<<"\n";
}
//1206B