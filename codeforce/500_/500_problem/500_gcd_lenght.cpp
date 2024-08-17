#include<bits/stdc++.h>
using namespace std;
int a,b,c,t;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		int x=pow(10,a-1)+pow(10,c-1);
		int y=pow(10,b-1);
		cout<<x<<" "<<y<<endl;
	}
}
//1511B