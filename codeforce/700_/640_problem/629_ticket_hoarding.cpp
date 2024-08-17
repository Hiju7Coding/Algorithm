#include<bits/stdc++.h>
using namespace std;
int main(){
  
 int t; cin>>t;
 while(t--){
   int n,m,k; cin>>n>>m>>k;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
  int b=0;
  long long sum=0;
  for(int i=0;i<n;i++){
    long long mn=min({k,m});
    sum+=mn*(1LL*a[i]+b);
    b+=mn;
    k-=mn;
    
 }
 cout<<sum<<"\n";
}
 return 0;
  
}

//1951C