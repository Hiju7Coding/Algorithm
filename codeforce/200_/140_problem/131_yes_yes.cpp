#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
string s;
cin>>s;
string g="";
for(int i=0;i<50;i++){g=g+"Yes";}
if(g.find(s)!=-1){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;
}
return 0;
}
//1759A