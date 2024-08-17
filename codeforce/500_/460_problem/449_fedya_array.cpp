#include<bits/stdC++.h>
using namespace std;
int T;
int main(){
	ios::sync_with_stdio(0);
	cin>>T;
	while(T--){
		int x,y;
		cin>>x>>y;
		cout<<(x-y)*2<<'\n';
		for(int i=y;i<x;i++)cout<<i<<' ';
		for(int i=x;i>y;i--)cout<<i<<' ';
		cout<<'\n';
	}
}
//1793B