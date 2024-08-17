#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x;cin>>t;while(t--)
	{
		cin>>x;int y=0,i=0;
		while(y<=x+1&&y!=x)
		y+=++i;
		cout<<i<<endl;
	}
}
//1455B