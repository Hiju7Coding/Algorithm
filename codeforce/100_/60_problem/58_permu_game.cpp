#include<bits/stdc++.h>
using namespace std;
int T,n,x,gt,xs,hs;
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);gt=xs=hs=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&x);
			if(x!=i&&x!=n-i+1)gt++;
			if(x!=i)xs++;
			if(x!=n-i+1)hs++;
		}
		puts(((xs<=hs-gt)?"First":((hs<xs-gt)?"Second":"Tie")));
	}
	return 0;
}
//1772E