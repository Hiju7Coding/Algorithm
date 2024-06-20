#include<bits/stdc++.h>
using namespace std;
char c;
int l,v;
string s;
int main()
{
	cin>>l;
	while(l--&&cin>>s>>c)
	{
		v=0;
		for(int i=0;i<s.size();i+=2)
			if(s[i]==c)
				v=1;
		v?puts("YES"):puts("NO");
	}
}
//1650A