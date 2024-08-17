#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		int ans;
		if(t.size()==1 && t[0]=='a') cout<<1<<endl;
		else if(t.find('a')!=-1) cout<<-1<<endl;
		else cout<<(1LL<<s.size())<<endl;
	}
}
//1674C