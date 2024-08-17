#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[200005];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int k=a[0];
		sort(a,a+n);
		if(k==a[0]) cout<<"bOB\n";
		else cout<<"alICe\n";
	}
}
//1747C