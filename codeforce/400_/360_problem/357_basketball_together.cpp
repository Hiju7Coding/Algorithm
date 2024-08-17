#include<bits/stdc++.h>
using namespace std;
int n,d,a[100005],m,sum;
int main(){
  cin>>n>>d;
  for(int i=1;i<=n;i++) cin>>a[i];
  sort(a+1,a+n+1);
  for(int i=n;i>=1;i--){
    m+=(d/a[i]+1);
    if(m>n) break;
    sum++;
  }
  cout<<sum<<endl;
  return 0;
}
//1725B