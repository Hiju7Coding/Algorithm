#include<bits/stdc++.h>
using namespace std;
int t,n,a[200000];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		cout<<min(n-2,a[n-2]-1)<<endl;
	}
	return 0;
}
//1197A