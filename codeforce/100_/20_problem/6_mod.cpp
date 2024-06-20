#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long x[t],y[t],z[t];
    for(int i = 0; i < t; i++){
        long long a,b,c;
        cin>>a>>b>>c;
        x[i] = a+b+c;
        y[i] = b+c;
        z[i] = c;
    }
    for(int i = 0; i < t;i++){
        cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
    }
}