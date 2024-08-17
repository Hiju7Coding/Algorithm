#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(n--){
        long long c,s,a,b;
        cin>>c>>s;
        a=s/c;
        b=s%c;
        cout<<(a*a*c+2*a*b+b)<<' ';
    }
}
//1260A