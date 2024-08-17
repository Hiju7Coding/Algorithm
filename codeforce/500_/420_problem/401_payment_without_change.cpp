#include <bits/stdc++.h>
using namespace std;
int a,b,n,S,t;
int main(){
    cin>>t;
    while(t--){
        cin>>a>>b>>n>>S;
        cout<<((S<=min(S/n,a)*n+b)?"YES ":"NO ");
    }
    return 0;
}
//1256A