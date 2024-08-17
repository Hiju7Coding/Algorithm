#include <bits/stdc++.h>
using namespace std;
long long a[100005],i,t,n,k,miss,sum;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		k=k%(n+1);
		sum=0;
		for(i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		miss=n*(n+1)/2-sum;
		a[0]=miss;
		for(i=1;i<=n;i++){
		cout<<a[(i+n+1-k)%(n+1)]<<" ";	
		}
		cout<<endl;
	}
	return 0;
}
//1863C