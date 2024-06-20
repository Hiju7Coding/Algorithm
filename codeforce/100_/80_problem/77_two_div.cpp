#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,a,b;cin>>s;while(s--){
		cin>>a>>b;cout<<(b%a?lcm(a,b):b*(b/a))<<endl;
	}
}
//1916B