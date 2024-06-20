#include<bits/stdc++.h>
int T,n;
main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		printf("%d\n",1<<std::__lg(n));
	}
}
//1937A