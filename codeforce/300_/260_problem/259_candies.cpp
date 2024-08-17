#include<bits/stdc++.h>
using namespace std;
int n,p,t;
main()
{
	for(cin>>t;t--;)
	{
		cin>>n;
		for(p=3;n%p;p+=p+1);
		cout<<n/p<<endl;
	}
}
//1343A