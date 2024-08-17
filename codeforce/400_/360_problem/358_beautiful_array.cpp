#include<bits/stdc++.h>
using namespace std;
long long t,n,k,b,s;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k>>b>>s;
		if(b*k>s||s>b*k+n*(k-1)){
			cout<<"-1"<<endl;
			continue;
		}
		s=s-b*k;
		for(long long i=1;i<n;i++){
			cout<<min(s,k-1)<<" ";
			s=s-min(s,k-1);
		}
		cout<<s+b*k<<endl;
	}
}
//1715B