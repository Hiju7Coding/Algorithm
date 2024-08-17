#include <iostream>

using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,s,t;
		cin>>n>>s>>t;
		cout<<n-min(s,t)+1<<endl;
	}
}
//1187A