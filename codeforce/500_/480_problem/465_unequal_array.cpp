#include<bits/stdc++.h>
using namespace std;
int t,n,a[200010],l,r;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		l=-1,r=-1;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<n;i++)
		{
			if(a[i]==a[i+1]) 
			{
				if(l==-1) l=i;
				r=i;
			}
		}
		if(r==l) cout<<0<<endl;
		else cout<<max(1,r-l-1)<<endl;
	}
}
//1672C