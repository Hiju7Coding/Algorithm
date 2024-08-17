#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int a[N],p[N];

void solve(){
	int n,k;
	cin>>n;
	int t=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==1) p[++t]=i;
		else if(a[i]==2) p[++t]=i;
		else if(a[i]==n) p[++t]=i,k=i;
	}
	sort(p+1,p+4);
	cout<<p[2]<<" "<<k<<endl;
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
//1838B