#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        s = s.substr(0,s.size()/2);
        sort(s.begin(), s.end());
        cout<<(s[0] == s.back() ? "NO":"YES")<<endl;
    }
}
//1832A