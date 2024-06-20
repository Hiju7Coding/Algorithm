#include <bits/stdc++.h>

using ll = long long;
using namespace std;


const int mod = 1000000007;
ll A = 1000003000000003;
ll B = 1000000000020006;
ll C = 100;

int SUM(ll a,ll b){
    int r = ((a%mod)+(b%mod))%mod;
    return r;
}
int SUB(ll a,ll b){
    int r = ((a%mod)-(b%mod))%mod;
    return r;
}
int MUL(ll a,ll b){
    int r = (int)(((a%mod)*(b%mod))%mod);
    return r;
}
ll POW(ll a,ll b){
    int r = 1;
    for(ll i = 1; i <= b;i++){
        r = r * a;
        r = r % mod; 
    }
    return r % (ll)mod;
}

ll x,y,g;
void donthuc(ll a,ll b){
    if(b == 0){
        x = 1;
        y = 0;
        g = a;
    }
    else{
        donthuc(b,a%b);
        ll temp = x;
        x = y;
        y = temp - (int)(a/b)*y;
    }
}
ll DIV(ll a, ll b){
    donthuc(b,mod);
    b = (x%mod+mod)%mod;
    return MUL(a,b);
}
ll POW(ll a,ll m){
    ll res = 1;
    while(m>0){
        if(m%2 == 1){
            res = res*a;
            res = res % mod;
        }
        m = m/2;
        a = a * a;
        a = a % mod;
    }
    return res;
}
ll DIV2(ll a,ll b){
    return MUL(A,POW(B,M-2)%mod);
}
int main(){
    cout<<SUM(A,B)<<endl;
    cout<<SUB(A,B)<<endl;
    cout<<MUL(A,B)<<endl;
    cout<<POW(A,C)<<endl;
    cout<<DIV(A,B)<<endl;
}