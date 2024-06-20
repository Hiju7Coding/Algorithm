#include <iostream>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		while(a || b)
		{
			if(a) cout<<'0',a--;
			if(b) cout<<'1',b--;
		}
		cout<<endl; 
 
	}
	return 0;
}
//1694A