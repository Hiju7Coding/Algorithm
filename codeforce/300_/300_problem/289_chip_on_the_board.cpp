#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main(){
    ll t;
    cin>>t;
    while(t--){
    ll x,m=1e9,n=1e9,s=0,u=0,a,i;
    cin>>x;
    for(i=0;i<x;i++)cin>>a,s+=a,m=min(m,a);
    for(i=0;i<x;i++)cin>>a,u+=a,n=min(n,a);
    cout<<min(s+x*n,u+x*m)<<endl;
    }
    return 0;
}

//1879B