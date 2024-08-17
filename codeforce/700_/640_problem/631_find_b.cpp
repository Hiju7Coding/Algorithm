#include<bits/stdc++.h>
using namespace std;
const int N=300002;
int T,n,q,i,a,l,r;long long s[N],S[N];
int main(){
	scanf("%d",&T);while(T--){
		scanf("%d%d",&n,&q);
		for(i=1;i<=n;++i){
			scanf("%d",&a);
			s[i]=s[i-1]+(a==1);
			S[i]=S[i-1]+(a>1?a-1:0);
		}
		while(q--){
			scanf("%d%d",&l,&r);
			printf("%s\n",(l==r)||(S[r]-S[l-1]<s[r]-s[l-1])?"NO":"YES");
		}
	}
}
//1923C