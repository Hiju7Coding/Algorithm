#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,b; 
		cin>>n; 
		int a[n];
		map<int,vector<int>> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n;i++){
			cin>>b;
			m[b-a[i]].push_back(i+1);
		}
		auto k = m.begin();
		int r = (k->second).size(); 
		cout<<r<<endl; 
		for(int i=0;i<r;i++){
			cout<<(k->second)[i]<<" ";
		}
		cout<<endl;

	}
}
//1857D