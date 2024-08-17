#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;

	int n;
	cin>>n;

	while(n--)
	{
		cout<<a<<" "<<b<<endl;
		string aa,bb;
		cin>>aa>>bb;
		if(aa==a)a=bb;
		else b=bb;
	}	
	cout<<a<<" "<<b<<endl;
}
//776A