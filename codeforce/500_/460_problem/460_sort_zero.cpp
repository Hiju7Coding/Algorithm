#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i],b[a[i]]=i;
		int m=n;
		while(m>1 && a[m]>=a[m-1])
			m--;
		set <int> s;
		for(int i=1;i<m;i++)
		{
			s.insert(a[i]);
			m=max(b[a[i]],m);
		 } 
		cout<<s.size()<<endl;
	}
	return 0;
}
//1712C