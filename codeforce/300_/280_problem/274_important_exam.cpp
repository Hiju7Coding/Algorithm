#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int mx[m]={0};
	map<int,int>mp[m];
	while(n--)
	{
		string s;
		cin>>s;
		for(int i=0;i<m;i++)
		{
			mp[i][s[i]]++;
			mx[i]=max(mx[i],mp[i][s[i]]);
		}
	}
	int a[m],ans=0;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		ans+=mx[i]*a[i];
	}
	cout<<ans<<endl;
}
//1201A