#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		if(x<=2 || x==4 || x==5 || x==8 || x==11) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
//903A