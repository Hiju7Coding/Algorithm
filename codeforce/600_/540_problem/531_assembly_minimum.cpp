#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int m=n*(n-1)/2,a[m];
for(int i=0;i<m;i++)cin>>a[i];
sort(a,a+m);
for(int i=0;i<m;i+=--n)cout<<a[i]<<" ";
cout<<1000000000<<endl;
}
}

//1857C