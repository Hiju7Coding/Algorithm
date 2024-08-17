#include<bits/stdc++.h>
using namespace std;
int t,n,x;
deque<int>q;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		q.clear();
		for(int i=1;i<=n;i++){
			cin>>x;
			if(q.front()>x){ 
				q.push_front(x);
			}else q.push_back(x);
		}
		for(auto i:q)
			cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}
//1579E1