#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n;
		cin>>s;
		if(n==2&&(s[0]>=s[1]))
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<'\n'<<2<<'\n'<<s[0]<<" "<<s.substr(1)<<endl;
	}
}
//1107A