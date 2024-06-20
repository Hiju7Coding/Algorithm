#include<bits/stdc++.h>
using namespace std;
long long n,k,t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<n/k*k+min(n%k,k/2)<<endl;
	}
}
//1283B