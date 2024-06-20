#include<iostream>
using namespace std;
int main(){
long long t,n,q,l,r,k,i,x;
cin>>t;
while(t--){
cin>>n>>q;
long long a[n+1],b[n+1]={0},sum=0;
for(i=1; i<=n; i++) {cin>>a[i];b[i]=b[i-1]+a[i];}
while(q--){
cin>>l>>r>>k;
x = b[n] + (r-l+1)*k - (b[r]-b[l-1]);
(x%2)?cout<<"YES"<<endl:cout<<"NO"<<endl;}}//
return 0;}
//1807D