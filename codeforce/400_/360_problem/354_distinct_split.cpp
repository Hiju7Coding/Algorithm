#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		vector<int>v(n);
		set<char>a;
		for(int i=n-1;i>=0;i--)
		{
			a.insert(s[i]);
			v[i]=a.size();
		}
		a.clear();
		int r=0;
		for(int i=0;i<n-1;i++)
		{
			a.insert(s[i]);
			r=max(r,(int(a.size())+v[i+1]));
		}
		cout<<r<<endl;
		t--;
	}
	return 0;
}
//1791D