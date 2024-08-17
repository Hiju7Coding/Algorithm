#include<bits/stdc++.h>
using namespace std;
int n,s,a,t,l,m,r;
int main()
{
	for(cin>>n>>s>>a;n--;)
    {
		cin>>t>>l;
		r+=(t-m)/a;
		m=t+l;
	}
	cout<<(s-m)/a+r;
}
//1059A