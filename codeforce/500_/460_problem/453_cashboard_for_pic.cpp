#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,c,sum=0,p=0;
		cin>>n>>c;
		for(int i=0;i<n;i++){
			long long s;
			cin>>s;
			c=c-s*s;
			sum+=s;
		}
		int u=sum/n;
		cout<<((int)sqrt(u*u+c/n)-u)/2<<endl;
	}
	return 0;
}
//1850E