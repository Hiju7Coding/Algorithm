#include<bits/stdc++.h>
using namespace std;
int n,m,l;
long long k,x,a[200100];
long long b[200030];
int main()
{
	cin>>n>>k>>x;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort (a,a+n);
	for (int i=1;i<n;i++)
	{
		if (a[i]-a[i-1]>x) b[m++]=(a[i]-a[i-1]-1)/x;
	}
	sort (b,b+m);
	for (;l<m&&b[l]<=k;)
	{
		k-=b[l++];
	}
	cout<<m-l+1<<endl;
	return 0;
}
//1539C