#include<bits/stdc++.h>
using namespace std;
long long x,p=2e18,n,y=1,k;
int main(){
      
	cin>>n>>k;
	for (int i=1;i<=k;i++){cin>>x; if (n%x<n%p){p=x,y=i;}}
	cout<<y<<' '<<n/p<<endl;
	return 0;
}
//939B