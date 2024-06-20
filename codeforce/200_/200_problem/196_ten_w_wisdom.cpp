#include<iostream>
using namespace std;
int t,n,a,b;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int c=0,mx=0;
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			if(a<=10&&b>mx) c=i,mx=b;
		}
		cout<<c<<endl;
	}
}
//1850B