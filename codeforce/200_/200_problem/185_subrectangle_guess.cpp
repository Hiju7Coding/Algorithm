#include<bits/stdc++.h> 
using namespace std;
int n,m,T;
int main()
{
	cin>>T;
	while (T--)
	{
		cin>>n>>m;
		int M=-1e9-7,ans=0;
		for (int i=1;i<=n;i++)
			for (int j=1;j<=m;j++) 
			{
				int x; cin>>x;
				if (x>M) M=x,ans=max(i,n-i+1)*max(j,m-j+1);
			}
		cout<<ans<<endl;
	}
	return 0;
}
//1695A