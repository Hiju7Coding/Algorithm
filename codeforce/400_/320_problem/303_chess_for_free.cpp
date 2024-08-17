#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a=1,b=2,s=3;
	cin>>t;
	while(t--){
		cin>>a;
		if(a==s)
		{
			cout<<"NO";
			a=-1;
			break;
		}
		b=s;
		s=6-a-b;
	}
	if(a!=-1)
	cout<<"YES";
}
//893A