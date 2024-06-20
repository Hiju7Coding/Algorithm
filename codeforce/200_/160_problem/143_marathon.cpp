#include<iostream>
using namespace std;
int main(){
	int t,a,b,c,d;
	cin>>t;
	while(t--){
		int ans=0;
		cin>>a>>b>>c>>d;
		cout<<(b>a)+(c>a)+(d>a)<<endl;
	}
}
//1692A