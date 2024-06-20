#include "bits/stdc++.h"
using namespace std;
int t,a,b,c,d;
int main(){
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        double y= log10(1.0*a/c)+b-d;
        cout<<(y==0?"=":(y>0?">":"<"))<<endl;
    }
    return 0;
}
//1613A