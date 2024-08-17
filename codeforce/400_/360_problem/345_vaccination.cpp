#include<bits/stdc++.h>
using namespace std;
int c,n,k,d,w,t[200005],ans=1;
int main(){
  cin>>c;
  while(c--){
    cin>>n>>k>>d>>w;
    for(int i=1;i<=n;i++)cin>>t[i];
    for(int i=1,p=1;i<=n;i++)if(t[i]-t[p]-w>d||i-p+1>k)p=i,ans++;
    cout<<ans<<'\n',ans=1;
  }
  return 0;
}
//1804B