#include <bits/stdc++.h>
using namespace std;
int main() {
  int t,c,m,x;cin>>t;while(t--){
    cin>>c>>m>>x;
    cout<<min(min(c,m),(c+m+x)/3)<<'\n';
  }
}
//1221C