#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;string s;cin>>n>>s;
        cout<<(count(s.begin(),s.end(),'U')%2?"YES":"NO")<<"\n";

    }
}