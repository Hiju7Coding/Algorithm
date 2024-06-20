#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,n,c;
   cin>>t;
   string s;
   while(t--){
    cin>>n>>s;
    c=0;
    for(int i=0;i<26;i++) 
       c+=count(s.begin(),s.end(),65+i)>=i+1;
    cout<<c<<endl;
   }
}
//1914A