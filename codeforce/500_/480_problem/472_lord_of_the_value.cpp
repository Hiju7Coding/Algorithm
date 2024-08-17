#include<bits/stdc++.h>
using namespace std;
int t,n,a[100011];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;++i)
		cin>>a[i];
		cout<<3*n<<endl;
		for(int i=1;i<=n;i+=2){
			for(int j=0;j<3;++j){
			cout<<"1 "<<i<<" "<<i+1<<endl;
			cout<<"2 "<<i<<" "<<i+1<<endl;	
			}
		}
	}return 0;
}
//1523B