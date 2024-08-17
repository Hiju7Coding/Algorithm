#include<bits/stdc++.h>
using namespace std;
int n,i,c,r,m,a[179000];
int main(){
	for(cin>>n;i<n;i++)
	    cin>>a[i], m=max(m,a[i]);
	for(i=0;i<n;i++)
		if(a[i]==m)c++;
		else r=max(r,c),c=0;
	cout<<max(r,c);
	return 0;
}
//1117A