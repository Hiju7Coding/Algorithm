#include<bits/stdc++.h>
using namespace std;
long long q,n;
int main(){
cin>>q;
while(q--){
	cin>>n;
	if(n%2&&n!=1){cout<<"-1"<<endl;continue;}
	for(int i=1;i<=n;i++)cout<<(i&1?n-i+1:i-1)<<" ";
	cout<<endl;
}
}
//1822D