#include<stdio.h>
int t,n;
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;++i) scanf("%*d");
		if(n&1) printf("4\n1 %d\n1 %d\n%d %d\n%d %d\n",n-1,n-1,n-1,n,n-1,n);
		else printf("2\n1 %d\n1 %d\n",n,n);
	}
}
//1869A