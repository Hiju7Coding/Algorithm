#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int n,r,b;
		cin>>n>>r>>b;
		
		for(int i=0;i<=b;i++){
			for(int j=0;j<((r+i)/(b+1));j++) s+='R';
			if(i<b) s+='B';
		}
		cout<<s<<endl;
	}
}
//1659A