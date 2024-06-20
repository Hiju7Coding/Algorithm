#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;cout<<"1\n";
		for(int i=1;i<n;i++){
			cout<<"1 ";
			for(int j=1;j<i;j++)cout<<"0 ";
			cout<<"1\n";
		}
	}
}
//1734B