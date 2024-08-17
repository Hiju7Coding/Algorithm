#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		if((n-k+1)>0&&(n-k+1)%2==1){
			cout<<"YES"<<endl;
			for(int i=1;i<k;i++)cout<<1<<" ";
			cout<<n-k+1<<endl;
		}
		else if(n-2*(k-1)>0&&(n-2*(k-1))%2==0){
			cout<<"YES"<<endl;
			for(int i=1;i<k;i++)cout<<2<<" ";
			cout<<n-2*(k-1)<<endl;
		}
		else cout<<"NO"<<endl;
	  }
}
//1352B