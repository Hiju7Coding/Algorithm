#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
	int t ;cin>>t;
	while(t--)
	{int n,g = 0;cin>>n;
	vector<int> v(n);
	for(int &it:v)cin>>it;
	for(int i = 0;i<n;i++)g = __gcd(g,abs(v[i] - v[n-1-i]));
	cout<<g<<endl;}
}
//1826B