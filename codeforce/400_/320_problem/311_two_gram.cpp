#include<bits/stdc++.h>
using namespace std;
int n,mx;
string s,a,c;
map<string,int>m;
main(){
cin>>n>>s;
for(int i=0;i<n-1;i++){
    c=s[i];
    c+=s[i+1];
    m[c]++;
    if(m[c]>mx)mx=m[c],a=c;
}
cout<<a;
}
//977B