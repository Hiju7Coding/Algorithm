#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n,k,a;
        cin>>n>>a,k=abs(a-1);
        for(int i=2;i<=n;++i)cin>>a,k=__gcd(k,abs(a-i));
        cout<<k<<"\n";
    }
return 0;
}
//1828B