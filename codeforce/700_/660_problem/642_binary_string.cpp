#include <bits/stdc++.h>
using namespace std;
int t,n,tmp,ans,modulo=998244353;
string s;
int main()
{
	cin>>t;
	for (int dem=1;dem<=t;dem++)
	{
		cin>>n>>s;
		tmp=1;
		ans=1;
		for (int i=1;i<n;i++)
		{
			if (s[i]==s[i-1])
				tmp=(tmp*2)%modulo;
			else
				tmp=1;
			ans=(ans+tmp)%modulo;
		}
		cout<<ans<<endl;
	}
}


//1762C