#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--){
        string s;cin>>s;
        if(regex_match(s,regex("(aa|aaa|bb|bbb)+"))) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
//1671A