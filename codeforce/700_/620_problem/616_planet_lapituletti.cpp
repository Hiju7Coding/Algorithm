#include<bits/stdc++.h>
using namespace std;
//code by 
int re[10]={0,1,5,100,100,2,100,100,8,100};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int H,M,h,m;
		char op;
		cin>>H>>M>>h>>op>>m;
		while(1)
		{
			if(re[m%10]*10+re[m/10]<H&&re[h%10]*10+re[h/10]<M)
				break;
			if(++m==M)
			{
				m=0;
				h=(h+1)%H;
			}
		}
		printf("%02d:%02d\n",h,m);
	}
	return 0;
}
				  	   		  			   		 	    		
//1493B