#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int main(){
cin>>t;
	while(t--){
		cin>>n>>k;
		if(k>(n+1)/2){printf("-1\n");continue;}
		for(int i=1;i<=n;i++,putchar('\n'))
 for(int j=1;j<=n;j++)
			putchar((i==j&&i%2&&(i+1)/2<=k)?'R':'.');
	}
	return 0;
}
//1621A