#include<iostream>
using namespace std;
int t,n,a[200002],b[200002],A,B;
int main()
{
	cin>>t;
	while(t--)
	{
		A=0,B=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		for(int i=1;i<=n;i++)
		{
			if(a[i]>b[i]) A+=a[i];
			else if(b[i]>a[i]) B+=b[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]==b[i])
			{
				if(a[i]*(A-B)>0) B+=b[i];
				else A+=a[i];
			}
		}
		cout<<min(A,B)<<"\n";
	}
	return 0;
}
//1989C