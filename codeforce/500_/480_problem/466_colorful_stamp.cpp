#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int b=0,r=0,n;
	string s,out="yes";
	cin>>n>>s;
	s+="W";
	for(int i=0;i<=n;i++)
	{
		if(s[i]=='B')
		b++;
		else if(s[i]=='R')
		r++;
		else
		{
			if(r+b!=0&&r*b==0)
			out="no";
			b=0;r=0;
		}	
	 } 
	cout<<out<<endl;
	}
	return 0;
}
//1669D