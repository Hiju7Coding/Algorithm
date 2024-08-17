#include <bits/stdc++.h>
using namespace std;
int q,n,k,i,r,a[179];
int main(){
	for(cin>>q;q--;){
		for(cin>>n>>k,i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);
		if(a[n-1]-a[0]>k+k)r=-1;
		else r=a[0]+k;
		cout<<r<<endl;
	}return 0;
}
//1183B