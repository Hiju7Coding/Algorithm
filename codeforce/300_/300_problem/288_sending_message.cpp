#include <iostream>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,f,a,b,x,m=0;
		cin>>n>>f>>a>>b;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			f-=min(b,(x-m)*a);
			m=x;
		}
		if(f<=0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
//1921C