#include<bits/stdc++.h>
using namespace std;const int N=2e3+7;int T_T,n,m,flag,i,ans;char s[N],t[N];
int main(){
	for(scanf("%d",&T_T);T_T--;){
		for(scanf("%d%d%s%s",&n,&m,s,t),flag=ans=0,i=1;i<m;++i)if(t[i]==t[i-1])flag=1;
		for(i=1;i<n;++i)if(s[i-1]==s[i]&&(s[i-1]==t[0]||s[i]==t[m-1]||flag))ans=1;
		puts(!ans?"YES":"NO");
	}
}
//1890B