#include<bits/stdc++.h>

using ll = long long;
using namespace std;
ll gcd(ll a,ll b){
    if(b == 0 ) return a;
    else return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    ll a[t];
    for(int i = 0; i < t; i++){
        cin>>a[i];
    }
    for(int i = 0; i < t; i++){
        cout<<a[i]-3<<" 1 1 1"<<endl;
    }
}