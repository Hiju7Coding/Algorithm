#include<bits/stdc++.h>
using namespace std;
char c,s;
int n;
int main()
{
	cin>>n>>s;
	while(cin>>c)
	{
		if(s!=c) {cout<<"YES\n"<<s<<c;return 0;}
		s=c;
	}
	cout<<"NO";
}
//1073A