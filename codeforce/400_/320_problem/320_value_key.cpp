#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		if(b[i]>a[i]){
			cout<<"-1\n";
			return 0;
		}
	}
	cout<<b<<"\n";
}
//801B