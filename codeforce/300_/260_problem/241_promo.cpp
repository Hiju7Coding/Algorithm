#include<bits/stdc++.h>
using namespace std;
const int M=200010;
long long a[M];
 
int main()
{
	long long n,q,x,y;
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++) a[i]+=a[i-1];
	while(q--)
	{
		cin>>x>>y;
		cout<<a[n-x+y]-a[n-x]<<endl;
	}
}
//1687B