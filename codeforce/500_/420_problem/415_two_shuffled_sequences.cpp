#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int j;
	set<int> b;
	set<int,greater<int>> c;
	map<int,int> m;
	for(int i=0;i<n;i++){
		cin>>j;
		if(b.count(j)) c.insert(j);
		b.insert(j);
		m[j]++;
		if(m[j]==3){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES\n";
	cout<<b.size()<<'\n';
	for(auto i:b) cout<<i<<' ';
	cout<<"\n"<<c.size()<<'\n';
	for(auto i:c) cout<<i<<' ';
	return 0;
}
//1144C