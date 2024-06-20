#include<stdio.h>
int main(){
	int t,x,a[4];
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&x,a+1,a+2,a+3);
		if(a[x]==0||a[1]==1||a[2]==2||a[3]==3)printf("NO\n");
		else printf("YES\n");
	}
	
	return 0;
}
//1709A