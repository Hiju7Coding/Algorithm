#include<bits/stdc++.h>
using namespace std;
int main()
{
	int j,t,n,k,a[100005],b[100005];
	scanf("%d",&t);
	for(;t>0;t--)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)scanf("%d",&a[j]);
		if(a[n-1]==1){printf("NO\n");continue;}
		printf("YES\n");
		k=0;
		for(j=1;j<n;j++)
			if(a[j]!=a[j-1])b[k++]=j;
		for(j=0;j<n-k;j++)printf("0 ");
		for(j=0;j<k;j++)printf("%d ",b[j]);
		printf("\n");
	}
	return 0;
}


//1839C