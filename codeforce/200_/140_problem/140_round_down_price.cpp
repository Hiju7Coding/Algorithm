#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
    while(t--)
    {
        int m;cin>>m;
        int x=log10(m);
        cout<<m-(int)pow(10,x)<<'\n';
    }
 
}
//1702A