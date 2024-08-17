#include <bits/stdc++.h>
 
using namespace std;
 
int n,x,r;
 
int main()
{
	for(cin>>n;n--;)
	{
		cin>>x;
		cout<<(abs(x)%2?r=1-r,(x+400)/2-200+r:x/2)<<" ";
	}
}
//1237A