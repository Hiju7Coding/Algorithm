#include<bits/stdc++.h>
using namespace std;
int main (){
    int n; 
    cin>>n; 
    while(n--){
        int x,y; cin>>x>>y;
        (x>=y||x>=4||x/2*3==y)? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}
//1257B