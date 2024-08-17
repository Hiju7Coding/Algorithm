#include<bits/stdc++.h>
using namespace std;
string s,t,d="Yes";
set<char>c={'a','e','i','o','u'};
int main(){
    cin>>s>>t;
    if(s.size()!=t.size())cout<<"No";
    else{
       for(int i=0;i<s.size();i++)if(c.count(s[i])!=c.count(t[i]))d="No";
            cout<<d;
       }
}
//1111A