#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll n;cin>>n;string s;
	while(cin>>n>>s){
		sort(s.begin(),s.end());
		cout<<(s=="Timru"?"YES":"NO")<<endl;
	}
}
//1722A