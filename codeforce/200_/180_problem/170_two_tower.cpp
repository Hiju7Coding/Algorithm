#include <cstdio>
const int N=50;
int T,n,m;char s[N],t[N];
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&n,&m);
		scanf("%s %s",s,t);int ans=0;
		for(int i=0;i<m;++i)s[n+i]=t[m-1-i];
		for(int i=1;i<n+m;++i)ans+=s[i]==s[i-1];
		puts(ans<=1?"Yes":"No");
	}
	return 0;
}
//1795A