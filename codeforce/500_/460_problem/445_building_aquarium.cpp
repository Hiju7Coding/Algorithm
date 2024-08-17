#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int t,n,x; cin>>t;
	while(t--&&cin>>n>>x){
		vector<int>a(n);
        for(auto &i:a)cin>>i;
		int l(1),r(3e9);
		while(r>l+1){
			int m=l+r>>1,d=0;
			for(int i:a)d+=m-min(m,i);
			d<=x?l=m:r=m;
		}
		cout<<l<<'\n';
	}
}
//1873E