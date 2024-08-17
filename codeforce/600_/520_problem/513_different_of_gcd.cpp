#include<bits/stdc++.h>
using namespace std;
int T,n,l,r,ans[100005];
void doing(){
	cin>>n>>l>>r;
	for(int i=1;i<=n;i++){
		ans[i]=l-(l-1)%i-1+i;
		if(ans[i]>r) return printf("NO\n"),void();
	}
	printf("YES\n");
	for(int i=1;i<=n;i++) printf("%d ",ans[i]);
	putchar('\n');
}
int main(){
	cin>>T;
	while(T--) doing();
}
//1708B