#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int oo=2,ee=1;
        for(int i=0;i<n;i+=2) if((s[i]-'0')%2==1) oo=1;
        for(int i=1;i<n;i+=2) if((s[i]-'0')%2==0) ee=2;
        if(n%2==1) cout<<oo<<'\n';
        else cout<<ee<<'\n';
    }
}
//1419A