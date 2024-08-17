#include<bits/stdc++.h>
using namespace std;
int t,n,a[200002],x,y;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		int i=1,j=n,p=1,q=n;
		while(i<j){
			if(a[i]==p)p++,i++;
			else if(a[i]==q)q--,i++;
			else if(a[j]==p)p++,j--;
			else if(a[j]==q)q--,j--;
			else break;
		}
		if(i<j)cout<<i<<' '<<j<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
//1793C