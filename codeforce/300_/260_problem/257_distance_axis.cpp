#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		if(k>=n) printf("%d\n",k-n);
		else printf("%d\n",(n-k)%2);
	}
}
//1401A