#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{ 
	int T;scanf("%d",&T);
	while(T--)
	{
		int n;scanf("%d",&n);
		fill(a,a+10,0);
		for(int i=0,x;i<n;++i)
		{
			scanf("%d",&x);
			++a[x%10];
		}
		bool ok=0;
		for(int i=0;i<10;++i)
		if(a[i])
		{
			--a[i];
			for(int j=0;j<10;++j)
			if(a[j])
			{
				--a[j];
				if(a[(23-i-j)%10])ok=1;
				++a[j];
			}
			++a[i];
		}
		puts(ok?"YES":"NO");
	}
	return 0;
} 
//1692F