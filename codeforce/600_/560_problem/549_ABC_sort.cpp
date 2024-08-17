#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
bool solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=n;i>2;i-=2)
		if(min(a[i],a[i-1])<max(a[i-2],a[i-3]))
			return 0;
	return 1;
}
int main()
{
	int a;cin>>a;
	while(a--)
		puts(solve()?"YES":"NO");
}
//1674D