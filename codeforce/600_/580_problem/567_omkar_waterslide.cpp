#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		long long a[n],ans=0;
		cin>>a[0];
		for(int i=1;i<n;i++)
		{cin>>a[i];
		ans+=max(a[i-1]-a[i],(long long)0);
		}
		cout<<ans<<endl;
	}
}
//1392C