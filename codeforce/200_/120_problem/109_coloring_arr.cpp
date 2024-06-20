#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[110];
	cin>>t;
	while(t--)
	{
		int s=0;
		cin>>n;
		for(int i=1;i<=n;i++)  cin>>a[i],s+=a[i];
		if(s%2)  cout<<"NO\n";
		else  cout<<"YES\n";
	}
}
//1857A