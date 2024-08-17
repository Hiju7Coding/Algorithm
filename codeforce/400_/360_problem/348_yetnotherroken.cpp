#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
string s,a;int r=0,l=0;
cin>>s;
int n=s.size();
for(int i=n-1;i>=0;i--){
  if(s[i]=='b') r++;
  else if(s[i]=='B') l++;
  else
  {
    if(s[i]>='a'&&r) r--;
    else if(s[i]<'a'&&l) l--;
    else a+=s[i];
  }
}
reverse(a.begin(),a.end());
cout<<a<<endl;

}
return 0;
}
//1907B