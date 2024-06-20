#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,h,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>h>>m;
		int tm=h*60+m;
		int a=1510;
		while(n--)
		{
			cin>>h>>m;
			int p=h*60+m;
			if(p<tm)p+=(24*60);
			a=min(a,p-tm);
		}
		cout<<a/60<<" "<<a%60<<endl;
	}
}
//1714A