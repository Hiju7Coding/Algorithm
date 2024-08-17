#include<bits/stdc++.h>
using namespace std;
int a[200005],n;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int x;
		scanf("%d",&x);
		a[x]=i;
	}
	int ml=0;
	for(int i=1;i<=n;i++)
	{
		int x;
		scanf("%d",&x);
		printf("%d ",max(0,a[x]-ml));
		ml=max(ml,a[x]);
	}
}
//1073B