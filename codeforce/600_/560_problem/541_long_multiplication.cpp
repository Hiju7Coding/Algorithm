#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x,y;
		cin>>x>>y;
		int l=x.size();
		for(int i=1;i<=l;i++)
		if((x>y&&x[i]>y[i])||(x<y&&x[i]<y[i])) swap(x[i],y[i]);
		cout<<x<<endl<<y<<endl;
	}
}
//1954C