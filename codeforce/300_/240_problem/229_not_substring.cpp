#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		int n=s.size();
		string a="",b="";
		for(int i=1;i<=n;i++)a+="(",b+="()";
		for(int i=1;i<=n;i++)a+=")";
		if(a.find(s)==-1){
			cout<<"YES\n"<<a<<endl;
		}
		else if(b.find(s)==-1){
			cout<<"YES\n"<<b<<endl;
		}
		else cout<<"NO\n";
	}
	return 0;
}
//1860A