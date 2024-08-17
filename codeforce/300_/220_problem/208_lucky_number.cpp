#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{   int n,m,i;
	cin>>n>>m;
	int z=INT_MIN;
	int l=-1;
	
    for(i=max(n,1);i<=min(m,n+200);i++)
	{
	string k=to_string(i);
	sort(k.begin(),k.end());
	int x=k[k.size()-1]-k[0];
		if(x>z)
		{
			z=x;
			l=i;
		}
	}
	cout<<l<<endl;
	}
}
//1808A