#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,n;string s;
cin>>n;
while(n--){
	int sum=0,a[7]={0};
	cin>>x>>y>>s;
	for(int i=0;i<x;i++)
	if(a[s[i]-'A']<y){a[s[i]-'A']++;sum++;}
	cout<<7*y-sum<<endl;
}
}
//1980A