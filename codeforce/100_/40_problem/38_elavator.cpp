#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,d,e;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        d=a-1;
        e=abs(b-c)+c-1;
        cout<<(d<e?1:(d>e?2:3))<<endl;
    }
}