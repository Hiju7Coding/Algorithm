#include<bits/stdc++.h>
using namespace std;
int n,m,a[50005],t;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int fir=0x3f3f3f3f,sec=0x3f3f3f3f;
		long long ans=0;
		for(int i=1;i<=n;i++){
			cin>>m;
			for(int j=1;j<=m;j++)cin>>a[j];
			sort(a+1,a+1+m);
			fir=min(fir,a[1]);
			sec=min(sec,a[2]);
			ans+=a[2];
		}
		cout<<ans-sec+fir<<endl;
	}
	return 0;
}
//1859B