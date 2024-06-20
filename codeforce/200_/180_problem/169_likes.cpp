#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    int n,a,l=0,d=0; cin>>n;
    for(int i=1;i<=n;i++)cin>>a, a>0?l++:d++;
    for(int i=1;i<=n;i++)cout<<(i<=l?i:l*2-i)<<' '; cout<<'\n';
    for(int i=1;i<=n;i++)cout<<(i/2<=d?i&1:i-d*2)<<' '; cout<<'\n';
  }
  return 0;
}
//1802A