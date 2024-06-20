#include<cstdio>
int T,a,b,c;
int main(){
    scanf("%d",&T);
    while(T--)scanf("%d%d%d",&a,&b,&c),puts((a+c%2>b)?"First":"Second");
}
//1858A