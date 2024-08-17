#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		bool f1=1,f2=1;
		for(int i=2;i<=n;i++){
			if(a[i-1]>a[i]) f1=0;
			if(a[i-1]<a[i]&&!f1)f2=0;
		}
		puts(f2?"YES":"NO"); 
	}
}
//1713B