#include<cstdio>
#include<algorithm>
using namespace std;
int T,ans;
void dfs(int u,int d,long long s,long long n){
	if(n<s){ans=min(ans,d+__builtin_popcountll(n));return;}
	dfs(u+1,d+1,s*u,n-s);
	dfs(u+1,d,s*u,n);
}
int main(){
	scanf("%d",&T);
	for(long long n;T--;){
		scanf("%lld",&n),ans=40;
		dfs(4,0,6,n);
		printf("%d\n",ans);
	}
	return 0;
}
//1646C