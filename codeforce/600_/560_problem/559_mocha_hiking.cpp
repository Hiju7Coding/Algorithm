#include<bits/stdc++.h>
using namespace std;
int n,x,t;
int main()
{
	cin>>t;
	while(t--)
	{
		int cur_ind=-1;
		cin>>n;
		for(int i=1; i<=n; i++)
		{
			cin>>x;
			if(x==0) cur_ind=i;
		}
		if(cur_ind==-1)
		cout<<n+1<<" ";
		for(int i=1; i<=n; i++)
		{
			cout<<i<<" ";
			if(i==cur_ind)
			cout<<n+1<<" ";
		}
		cout<<endl;
	}
}
//1559C