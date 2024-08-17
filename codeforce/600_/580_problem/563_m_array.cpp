#include<bits/stdc++.h>

using namespace std;
int k,m,n,s,t,a[100005];
main()
{
	for(cin>>t;t--;)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>k;
			a[k%m]++;
		}
		s=!!a[0];
		for(int i=1;2*i<m;i++)s+=a[i]||a[m-i]?max(abs(a[i]-a[m-i]),1):0;
		if(m%2==0)s+=!!a[m/2];
		cout<<s<<endl;
		for(int i=0;i<m;i++)a[i]=0;
	}
}
//1497B