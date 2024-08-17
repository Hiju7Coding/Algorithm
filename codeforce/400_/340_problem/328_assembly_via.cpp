#include<bits/stdc++.h>
using namespace std;
int t,n,x,now;
int main(){
	cin>>t;
	while(t--){
		cin>>n;now=501;cout<<now<<' ';
		for(int i=1;i<n;i++)cin>>x,cout<<(now+=x)<<' ';cout<<endl;
	}
}
//1968C