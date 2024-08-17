#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int n,k,m=0,a;
		set <int> Set;
		cin>>n>>k;
		for (int i=0;i<n;i++){
			cin>>a;
			m=max(a,m);
			Set.insert(a);
		}
		int meh;
		for (meh=0;Set.count(meh)==1;meh++);
		int b=(meh+m+1)/2;
		if (b>m) cout<<n+k;
	else 	if (Set.count(b)==1 or k==0) cout<<n;
		else cout<<n+1;
		cout<<endl;
	}
}
//1496B