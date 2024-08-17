#include <cstdio>
int T,x,n,m;
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d",&x,&n,&m);
		while(x>20&&n) x>>=1,x+=10,--n;
		puts(x<=m*10?"YES":"NO"); 
	} 
}
//1337B