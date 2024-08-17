#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,r;
		cin>>n>>r;
		cout<<min(n*(n-1)/2+1,(1+r)*r/2)<<endl;
	}
}

//1371B