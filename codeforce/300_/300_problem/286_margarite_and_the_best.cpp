#include <iostream>
using namespace std;
int f(int x)
{
	if(x%2==0) return (x/2);
	else return ((x-1)/2-x);
}
int main() 
{
	int q,l,r;
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		cout<<f(r)-f(l-1)<<endl;
	}
}
//1080B