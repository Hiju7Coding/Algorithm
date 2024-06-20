#include<bits/stdc++.h>
using namespace std;
int n,m,r,c,t;
int main()
{
	cin>>t;
	while(t--)
	{
		int b=-1;
		cin>>n>>m>>r>>c;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
			{
				char a;
				cin>>a;
				if(a=='W')
					continue;
				if(i==r&&j==c)
					b=0;
				if((i==r||j==c)&&b!=0)
					b=1;
				if(b==-1)
					b=2;
			}
		cout<<b<<endl;
	}
	return 0;
}
//1627A