#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x=0, y=0, k=0;
        cin>>x>>y>>k;
        cout<<((k*(y+1)-2)/(x-1))+k+1<<endl;
    }
}
//1418A