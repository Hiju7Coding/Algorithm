#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int ans=n;
		int i=2;
		while(i*i<=n){
			if(n%i==0){
				ans=min(i,ans);
			}
			i++;
		}if(n==1||m==1||ans>m) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}return 0;
}
//1826C