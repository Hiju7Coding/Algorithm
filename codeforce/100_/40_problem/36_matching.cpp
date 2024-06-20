#include <bits/stdc++.h>
using namespace std;
int main(){
  long long t,ans;
  string s;
  for(cin>>t;cin>>s;){
    ans = s[0] != '0';
    for(int i=0;i<s.size();++i)
      if(s[i] == '?')
        ans *= 9 + !!i;
    cout<<ans<<endl;
  }
}