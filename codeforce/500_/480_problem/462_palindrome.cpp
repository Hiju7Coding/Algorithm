#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n ,f;
        char s[100002];
        for(scanf("%d%s",&n,s); s[0]<57&&n; --n) s[n-1]=105-s[n-1];

        for(;s[0]>56&&n;--n){
			f=s[n-1]>49;s[n-1]=97+f*10-s[n-1];
			if(n-1)s[n-2]+=f;
		}
		printf("%s\n",s) ;
    }
    return 0 ;
}
//1700B