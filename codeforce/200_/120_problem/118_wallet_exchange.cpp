#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		(a+b)%2==0?cout<<"Bob\n":cout<<"Alice\n";
	}
}
//1919A