#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005];
const int k=1e9+7;
signed main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<n/2<<endl;
		for(int i=0;i<n-1;i+=2)
			cout<<i+1<<" "<<i+2<<" "<<min(a[i],a[i+1])<<" "<<k<<endl;
	}
}

//1521B