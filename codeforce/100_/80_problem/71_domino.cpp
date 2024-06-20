#include<stdio.h>
 
int main()
{long long N,M;
scanf("%lld%lld",&N,&M);
printf("%lld",M>1?N*(M-1):N-1);
return 0;}
//1725A