#include<bits/stdc++.h>
using namespace std;int T_T;map<int,int>mp;int n,i,j;
int main(){
	for(cin>>T_T;T_T--;){
		for(cin>>n,mp.clear();n--;)cin>>i,mp[i]++;
		cout<<(mp.size()<=2 && abs(begin(mp)->second - rbegin(mp)->second)<=1?"YES":"NO")<<endl;
	}
}
//1890A