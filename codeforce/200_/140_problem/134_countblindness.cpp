#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s1,s2;cin>>s1>>s2;
		for(int i=0;i<n;i++){
			if(s1[i]=='G')s1[i]='B';
			if(s2[i]=='G')s2[i]='B';
		}
		if(s1==s2)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
//1722B