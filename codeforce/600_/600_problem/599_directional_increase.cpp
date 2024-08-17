#include <bits/stdc++.h>
using namespace std;
int t,n,r,f;
long long a,s;
 
main() {
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		a=s=r=f=0;
		while (n--) {
			scanf("%lld",&a);
			r|=(s+=a)<0;
			f|=s==0;
			r|=f&&s!=0;
		}
		puts(r||s?"No":"Yes");
	}
}
//1693A