#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n>>s;
	for(int i=0;i<n-1;i++)if(s[i]>s[i+1])return cout<<"YES\n"<<i+1<<' '<<i+2,0;
	cout<<"NO";
}
//1155A