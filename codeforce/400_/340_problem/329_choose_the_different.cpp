#include<bits/stdc++.h>
using namespace std;
int t,n,m,k,x; set<int>a,b,c;
int main(){
	cin>>t; while(t--){
		cin>>n>>m>>k;
		for(int i=0;i<n;++i){cin>>x; if(x<=k){a.insert(x);c.insert(x);}}
		for(int i=0;i<m;++i){cin>>x; if(x<=k){b.insert(x);c.insert(x);}}
		if(c.size()==k&&2*a.size()>=k&&2*b.size()>=k)cout<<"yes"<<endl; else cout<<"no"<<endl;
		a.clear(); b.clear(); c.clear();
	}
	return 0;
}
//1927C