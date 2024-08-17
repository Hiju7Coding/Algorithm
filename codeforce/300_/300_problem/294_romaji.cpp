#include<bits/stdc++.h>
using namespace std;
char s[105];
bool check(char ch){
	return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='n';
}
signed main(){
	cin>>(s+1);
	int n=strlen(s+1);
	for(int i=1;i<=n;++i)
		if(!check(s[i]) && (!check(s[i+1]) || s[i+1]=='n')) return puts("NO"),0;
	return puts("YES"),0;
} 
//1008A