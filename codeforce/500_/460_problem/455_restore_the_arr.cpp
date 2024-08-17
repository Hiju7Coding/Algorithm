#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t;
while(t--){
int n; cin>>n;
int b[n-1],a[n];
int x,y;
for(int j=0;j<n-1;j++){
 cin>>x; 
if(j==0) cout<<x<<" ";
else cout<<min(x,y)<<" ";
y=x;
if(j==n-2) cout<<x<<endl;
}}}
//1811C