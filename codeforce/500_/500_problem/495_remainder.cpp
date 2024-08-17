#include<bits/stdc++.h>
using namespace std;
int n,x,y,t;
string s;
int main()
{
	cin>>n>>x>>y>>s;
	for(int i=n-x;i<n;i++)
    {
		t+=(i==n-y-1)^(s[i]-'0');
    }
	cout<<t;
}
//1165A