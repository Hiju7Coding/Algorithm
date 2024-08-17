#include<bits/stdc++.h>
using namespace std;
int i,k,m,n,t;
string s;
int main(){
	for(cin>>t;t--;)
	{
		cin>>n>>s;
		for(i=k=m=0;i<n;i++)
		{
			if(s[i]&1)
			m=min(m,--k);
			else k++;
		}
		cout<<-m<<endl;
	}
}
//1374C