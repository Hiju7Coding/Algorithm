#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,x=0;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i],x+=a[i];
		if(x==0){
				cout<<"NO"<<endl;
				continue;
		}
		cout<<"YES"<<endl;
		sort(a,a+n);
		if(x>0)reverse(a,a+n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
//1427A