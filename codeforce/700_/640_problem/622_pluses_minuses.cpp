#include<bits/stdc++.h>
using namespace std;
long long t,a,n,i,p,r; string c;
int main(){
	for(cin>>t;t--;printf("%lld\n",r+n),i=a=p=r=0)
		for(cin>>c,++p;i<(n=c.size());a+p?:(r+=i,++p)) a+=(c[i++]=='+'?1:-1);
}
//1373C