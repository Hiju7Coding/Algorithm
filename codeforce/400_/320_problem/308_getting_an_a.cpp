#include <bits/stdc++.h>
using namespace std;
int n,i,s,a[179];
int main()
{
	for(cin>>n;i<n;i++)cin>>a[i],s+=a[i];
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(10*s>=45*n)break;
		s+=5-a[i];
	}
	cout<<i;
}
//991B