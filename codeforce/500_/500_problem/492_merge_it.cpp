#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a[3]={0};
		long long int x;
		int n,i;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			a[x%3]++;
		}
		cout<<(a[0]+min(a[1],a[2])+abs(a[1]-a[2])/3)<<endl;
	}
	return 0;
}
//1176B