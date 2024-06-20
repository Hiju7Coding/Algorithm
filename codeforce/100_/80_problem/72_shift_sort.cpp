#include <iostream>
using namespace std;
void fun(){
	string s;cin>>s;
	long long ans=0,t=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1') t++;
		else if(t>0) ans+=t+1;
	}
	cout<<ans<<endl;
}
int main(){
	int t; cin>>t;
	while(t--) fun();
}
//1969B