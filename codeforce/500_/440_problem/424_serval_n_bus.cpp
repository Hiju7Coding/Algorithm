#include<bits/stdc++.h>
using namespace std;
long long d,i,k,m,n,p,s,t;
int main(){
    cin>>n>>t;
    for(;i++<n;){       
        cin>>s>>d;for(;s<t;)s+=d;
        if(!k||s<m) m=s,k=i;
    }
    cout<<k;
}
//1153A