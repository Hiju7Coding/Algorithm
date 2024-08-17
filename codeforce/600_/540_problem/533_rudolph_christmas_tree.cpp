#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,d,h;
		cin>>n>>d>>h;
		double ans=n*1.0*d*h/2;
		int a=0,b;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&b);
			if(i!=0&&b-a<h)
				ans-=0.5*d*1.0*(h-b+a)/h*(h-b+a);
			a=b;
		}
		printf("%.10lf\n",ans);
	}
	return 0;
}

//1846D