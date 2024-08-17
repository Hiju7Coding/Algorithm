#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=2;i<=n;i+=2) cout<<i<<" ";
		cout<<1<<" ";
		for(int i=n;i>=3;--i) if(i%2)cout<<i<<" ";
		cout<<"\n";
	}
}
//1844B