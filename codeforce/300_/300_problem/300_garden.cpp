#include<bits/stdc++.h>
using namespace std;
int n,k,a,mn=1e9;
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(k%a==0)
			mn=min(mn,k/a);
	}
	cout<<mn;
	return 0;
}
//915A