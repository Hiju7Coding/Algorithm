#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b, c;
		cin>>a>>b>>c;
		cout<<((a+b+c)%9==0 && min({a, b, c})>=((a+b+c)/9)?"yes": "no")<<endl;
	}
}
//1463A