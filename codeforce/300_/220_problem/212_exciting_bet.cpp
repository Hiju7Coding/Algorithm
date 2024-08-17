#include <bits/stdc++.h>
using namespace std;
long long T,a,b,c;
int main()
{
	cin>>T;
	while(T--)
	{
		cin>>a>>b;
		c=abs(a-b);
		cout<<c<<' '<<((a==b)?0:min(a%c,(c-a%c)))<<endl;
	}
	return 0;
}
//1543A