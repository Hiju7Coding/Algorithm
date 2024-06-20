#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int x[t],y[t];
    for(int i = 0; i < t; i++){
        cin>>x[i]>>y[i];
        if(x[i]>y[i]) swap(x[i],y[i]);
    }
    for(int i = 0; i < t; i++){
        cout<<x[i]<<" "<<y[i]<<endl;

    }
}