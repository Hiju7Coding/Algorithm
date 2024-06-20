#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,c=1;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>x;
			if(x==i)c++;
		}
		cout<<c/2<<endl;
	}
}
//1855A