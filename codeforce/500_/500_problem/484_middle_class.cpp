#include<bits/stdc++.h>
using namespace std;
#define Ld long double
main(){
	int t;
	for(cin>>t;t--;){
		int n,i,j;
		Ld x,p,q,b[100007],s;
		cin>>n>>x;
		for(i=0;i<n;i++) cin>>b[i];
		sort(b,b+n);
		for(i=n-1,s=0;i>=0;i--){
			s+=b[i];
			if(s/(n-i)<x) break;
		}
		cout<<n-i-1<<endl;
	}
}
//1334B