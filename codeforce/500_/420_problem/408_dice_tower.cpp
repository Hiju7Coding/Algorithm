#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
int t;
cin>>t;
while(t--)
{
	long long x;
	cin>>x;
	if(x%14>=1&&x%14<=6&&x>=15)
	cout<<"YES"<<"\n";
	else
	cout<<"NO"<<"\n";
}
}
//1266B