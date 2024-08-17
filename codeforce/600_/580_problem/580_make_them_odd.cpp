#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<int>s;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			while(a%2==0)
			{
				s.insert(a);
				a=a/2;
			}
		}
		cout<<s.size()<<"\n";
		
	}
}

//1277B