#include<stdio.h>
int T,n,x,y;
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d",&n,&x,&y);
		if((x>0)==(y>0)||(n-1)%(x+y)){
			puts("-1");
			continue;
		}
		for(int i=1;i<n;i++)
			printf("%d%c",i-(i-1)%(x+y)+1,i==n-1? '\n':' ');
	}
	return 0;
}
//1733B