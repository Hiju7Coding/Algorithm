#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,x,p;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=p=1;i<=n;i++)
			cin>>x,x==p&&p++;
		cout<<(n-p+k)/k<<endl;
	}
	return 0;
}
//1766B