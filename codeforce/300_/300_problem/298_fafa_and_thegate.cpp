#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x=0,y=0,cnt=0;string a;
	cin>>n>>a;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='R')x++;
		else y++;
		if(x==y&&a[i]==a[i+1])
                 cnt++;
	}
	cout<<cnt;
}
//935B