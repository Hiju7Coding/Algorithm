#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin>>t;
	string str;
	while(t--){
		cin>>str;
		puts((str.find('g')<str.find('G')&&str.find('r')<str.find('R')&&str.find('b')<str.find('B'))?"YES":"NO");
	}
}
//1644A