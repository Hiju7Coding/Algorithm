#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int a=0,b=0,x,y;
		bool ee=1;
		cin>>n;
		while(n--)
		{
			cin>>x>>y;
			if (x<y||x<a||y<b||y-b>x-a) ee=0;
			a=x,b=y;
		}
		cout<<(ee?"YES":"NO")<<endl;
	}
}
//1334A