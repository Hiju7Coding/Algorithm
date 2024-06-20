#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[51]={0},n;
		cin>>n;
		int ans=3;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			if(a[a[i]]==i) ans=2;
		}
		cout<<ans<<endl;
	}
}
//1969A