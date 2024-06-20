#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if(y%x!=0)
		cout<<0<<" "<<0<<endl;
		else
		cout<<1<<" "<<y/x<<endl;
	}
}
//1674A