#include <bits/stdc++.h>
using namespace std;
int main() {
int a;cin>>a;
string s;cin>>s;
for(int z=1;z<=a;z++){
      if(a%z==0)reverse(s.begin(),s.begin()+z);
}
cout<<s;
    return 0;
}
//999B