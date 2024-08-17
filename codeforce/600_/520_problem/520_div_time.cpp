#include<bits/stdc++.h>
using namespace std;
main()
{
int n,k;
cin>>n>>k;
int i=k-1;
while(n%i!=0)
{
	i--;
}
cout<<n/i*k+i<<endl;
}
//1085B