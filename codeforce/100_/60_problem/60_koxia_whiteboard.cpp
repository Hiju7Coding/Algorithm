
#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int a[m+n];
long long ans=0;
for(int i=0;i<n+m;i++) cin>>a[i];
sort(a,a+n+m-1);
reverse(a,a+n+m);
for(int i=0;i<n;i++) ans+=a[i];
cout<<ans<<endl;
 
 
}
}

//1770A