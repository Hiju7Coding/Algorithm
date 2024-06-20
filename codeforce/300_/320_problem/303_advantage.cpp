#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1],b[n+1];
		for(int i=0;i<n;i++)
			cin>>a[i],b[i]=a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
			cout<<b[i]-a[n-1-bool(b[i]==a[n-1])]<<" ";
		cout<<endl;
	}
}
//1760C