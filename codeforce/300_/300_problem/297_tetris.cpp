#include <iostream>
using namespace std;
int c[10000];
int main()
{
	int n,m,x,ma=1000;
	cin>>n>>m;
	while(m--){
		cin>>x;
		c[x]++;
	}
	for(int i=1;i<=n;i++)
	ma=min(ma,c[i]);
	cout<<ma;
}
//961A