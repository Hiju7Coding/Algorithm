#include<bits/stdc++.h>
int T,k,n,a[300005];bool flg;
int main()
{
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);flg=1;k=1;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]!=a[1])flg=0;
			if(a[i]>a[k])k=i;
		}
		if(k==1)while(a[k]==a[k+1])k++;
		if(flg) printf("-1\n");
		else printf("%d\n",k);
	}
}
//1433C