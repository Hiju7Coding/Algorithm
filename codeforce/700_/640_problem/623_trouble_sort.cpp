#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m,k,x,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        m=k=i=j=0;
        while(m++<n)cin>>x,j|=x<i,i=x;
        while(--m)cin>>x,k|=x+1;
        puts(k-3&&j?"No":"Yes");
    }
    return 0;
}

//1365B