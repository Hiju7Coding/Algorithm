#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll A = 14;
ll C = 5;

ll POW(ll a,ll b){
    if(b == 0) return 1;
    ll x = POW(a,b/2);
    if(b%2==0) return (x*x);
    else return (x*x*a);
}
ll binPOW(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b%2==1){
            res = res*a;
        }
        b=b/2;
        a = a*a;
    }
    return res;
}
int main(){
    cout<<POW(A,C)<<endl;
    cout<<binPOW(A,C)<<endl;
}