#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5]={0},ok=1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i] and a[i]<=a[i-1])ok=0;
			a[i]+=a[i-1];
		}
		if(!ok)cout<<-1;
		else for(int i=1;i<=n;i++)cout<<a[i]<<' ';
		cout<<endl;
	}	
}
//1739B