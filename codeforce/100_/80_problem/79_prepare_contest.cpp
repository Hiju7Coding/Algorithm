#include<bits/stdc++.h>
using namespace std;
int main(){
int64_t t,n,i,k;
cin>>t;
while(t--){
cin>>n>>k;
for(i=n-k;i<=n;i++){
cout<<i<<" ";
}
 
for(i=n-k-1;i>0;i--){
cout<<i<<" ";
}
cout<<"\n";
}
}
//1914B