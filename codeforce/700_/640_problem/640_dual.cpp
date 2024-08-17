#include<bits/stdc++.h>
using namespace std;
int a[30];
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int ma=0,j=0;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			ma=max(ma,abs(a[i]));
			if(abs(a[i])==ma) j=i;
		}
		if(ma==0)
		{
			puts("0"); continue;
		}
		cout<<2*n-1<<endl;
		for(int i=1;i<=n;i++) cout<<i<<" "<<j<<endl;
		if(a[j]>0) for(int i=2;i<=n;i++) cout<<i<<" "<<i-1<<endl;
		else for(int i=n-1;i>=1;i--) cout<<i<<" "<<i+1<<endl;
	}
	return 0;
}
//1854A1