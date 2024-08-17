#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		if(m==1){
			for(int i=0;i<=n;i++)cout<<0<<"\n";
		}else{
			cout<<min(n+1,m)<<"\n";
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<(i%(m-1)+j)%m<<" ";
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}
//1868A