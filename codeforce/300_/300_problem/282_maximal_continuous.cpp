#include <bits/stdc++.h>
using namespace std;
int n,i,a,b,c,x,r,f;
int main(){
	for(cin>>n;i<=n;i++){
		if(i<n)cin>>x,i==0&&x==1?f=1:0;else x=0;
		if(x==1)r++;else f?a=r,f=0:i==n?c=r:r>b?b=r:0,r=0;
	}
	cout<<max(b,a+c);
}
//1141B