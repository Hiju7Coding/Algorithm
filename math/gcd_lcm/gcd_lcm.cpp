#include <bits/stdc++.h>

using ll = long long;
/*
#define ll long long
typedef long long ll;
*/

using namespace std;
ll a[10] = {10 , 20 , 15};
int n = 3;
int x,y,g;
ll gcd(ll a,ll b){
    if(b == 0 ) return a;
    else return gcd(b,a%b);
}
ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}
ll ucln(ll a[],int n){
    ll gc = a[0];
    for(int i = 1;i < n; i++){
        gc = gcd(gc,a[i]);
    }
    return gc;
}
ll bcnn(ll a[],int n){
    ll lc = a[0];
    for(int i = 1;i < n; i++){
        lc = lcm(lc,a[i]);
    }
    return lc;
}

void donthuc(int a,int b){
    if(b == 0){
        x = 1;
        y = 0;
        g = a;
    }
    else{
        donthuc(b,a%b);
        int temp = x;
        x = y;
        y = temp - (int)(a/b)*y;
    }
}

int main(){
    cout<<gcd(15,18)<<endl;
    cout<<lcm(15,18)<<endl;
    cout<<ucln(a,n)<<endl;
    cout<<bcnn(a,n)<<endl;
    
    cout<<x<<" "<<y<<endl;
}