#include <bits/stdc++.h>
using namespace std;

string s,t;
int q,n,a,b,x,m;

int main()
{
	cin>>q; while (q--)
	{
		cin>>s;
		n=s.length();
		a=s[0],b=s[n-1];
		x=(a<b?1:-1);
		m=0;
		t="";
		for (int i=a; i!=b+x; i+=x)
		{
			for (int j=0; j<n; ++j) 
			{
				if (i==s[j]) t+=to_string(j+1)+" ",++m;
			}
		}
		cout<<abs(a-b)<<" "<<m<<"\n";
		cout<<t<<"\n";
	}
}

//1729C