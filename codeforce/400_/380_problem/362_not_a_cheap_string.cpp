#include<bits/stdc++.h>
using namespace std;

int a[300];
int main(){
	int t;
	cin>>t;
	while(t--){
	string s;int m;
	cin>>s>>m;
	memset(a,0,sizeof a);
	for(auto i:s) a[i]++,m-=(i-'a'+1);
	for(int i='z';i>='a';i--){
		while(a[i]&&m<0){
			m+=i-'a'+1;
			a[i]--;
		}
	}
	
	for(auto i:s){
		if(a[i]) a[i]--,cout<<i;
	}
	cout<<endl;
	}
	return 0;
}
//1702D