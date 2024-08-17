#include<iostream>
using namespace std;
int main()
{
	long long s;
	int t,n,a,m,c;
	cin>>t;
	while(t--)
	{
		c=m=0,s=0;
		cin>>n;
		while(n--)
		{
			cin>>a;
			s+=a;
			if(a>m)m=a;
			if(m<<1==s)c++;
		}
		cout<<c<<'\n';
	}
}
//1985C