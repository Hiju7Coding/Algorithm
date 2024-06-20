#include<cstdio>
int n,k,a[200001];
int main(){
	int i,t;
	scanf("%d",&t);
	while(t--){
		int nw=1;
		scanf("%d%d",&n,&k);
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			if(a[i]==nw)nw++;
		}
		printf("%d\n",(n-nw+k)/k);
	}
}
//1768B