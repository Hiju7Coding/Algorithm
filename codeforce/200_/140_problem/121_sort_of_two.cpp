#include<bits/stdc++.h>
using namespace std;
int x,n,i,j,a[30],flag;
int main(){
	for(cin>>x;x--;){
		for(cin>>n,i=0;i<n;++i)
		cin>>a[i];
		for(flag=1,i=1;i<n;++i)
		if(i&i-1)
		if(a[i-1]>a[i])flag=0;
		puts(flag?"YES":"NO");
	}
}
//1891A