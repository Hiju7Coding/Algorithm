#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,k1,k2,a[200005];
	cin>>t;
	while(t--)
	{
		k1=0,k2=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)cin>>a[i];
		
		for(int i=0;i<n;i++)
		{
			if(a[i]==a[0]) k1++;
			if(a[i]==a[n-1]&&k1>=m) k2++;
		}
		
		if(k2>=m||(a[0]==a[n-1]&&k1>=m)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
//1851C