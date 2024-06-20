#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,a[100010],minn=2,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		if(i>0)minn=min(minn,a[i]+a[i-1]);
	}
	cout<<sum-minn-minn<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
//1778A