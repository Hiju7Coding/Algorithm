#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		int i;
		if(s[0]==s[1])
			i=0;
		else
			for(i=0;i<n&&s[i]>=s[i+1];i++);
		s=s.substr(0,i+1);
		cout<<s;
		reverse(s.begin(),s.end());
		cout<<s<<endl;
	}
	return 0;
}
//1616B