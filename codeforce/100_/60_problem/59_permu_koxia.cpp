#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
for(int i=1;i<=n;i++)printf("%d ",i&1?n-i/2:i/2);
puts("");
}
}
//1770B