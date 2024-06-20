#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string s,a;
		cin>>s;
		for(int i=1;i<=n-3;i++)
		{
			cin>>a;
			if(s[s.size()-1]==a[0]) s+=a[1];
			else s+=a;
		}
		if(s.size()<n) s+='b';
		cout<<s<<endl;
	}
}
//1618B