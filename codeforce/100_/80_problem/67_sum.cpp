#include<stdio.h>
int t,a,b,c;int main(){for(scanf("%d",&t);t;--t)scanf("%d%d%d",&a,&b,&c),puts(a+b==c||a+c==b||b+c==a?"YES":"NO");}
//1742A