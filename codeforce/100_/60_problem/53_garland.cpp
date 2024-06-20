#include <bits/stdc++.h>
using namespace std;
void solve(){
string s;cin>>s;
sort(s.begin(),s.end());
if(s[0]==s[3])puts("-1");
else if(s[1]==s[3]||s[0]==s[2])puts("6");
else puts("4");}
int main(){
int t;cin>>t;while(t--)solve();}
//1809A