#include<bits/stdc++.h>
using  namespace std;
long long n,t,mx,a,x,k,mn;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		mx=mn=0;
		for(k=1;k<=n;k++){
			cin>>a;
			mx+=(a+x-1)/x;
			mn+=a;
		}
		cout<<(mn+x-1)/x<<" "<<mx<<endl;
	}
}
//1471A