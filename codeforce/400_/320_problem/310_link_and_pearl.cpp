#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	int a=0,b=0;
	for(char c:s){
		if(c=='-') b++;
		else a++;
	}
	if(!a||b%a==0) cout<<"YES";
	else cout<<"NO";
}
//980A