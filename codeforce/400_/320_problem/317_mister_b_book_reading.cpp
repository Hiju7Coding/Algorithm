#include<iostream>
using namespace std;
int main()
{
    long long c,x,y,a,l,d=1;
	cin>>c>>x>>y>>a>>l;
	c=c-x;
	while(c>0)
    {
		x=min(y,x+a);
		c=c+l;
		c=c-x;
		++d;
	}
	cout<<d;
}
//820A