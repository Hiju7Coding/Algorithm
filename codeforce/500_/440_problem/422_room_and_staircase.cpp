#include<bits/stdc++.h>
using namespace std;
int ans,t,i,n;
string a;
int main(){
    cin>>t;
    while(t--){
        cin>>n>>a;
        ans=n;
        for(i=1;i<=n;i++){
            if(a[i-1]=='1')ans=max(ans, max(2*i, 2*(n-i+1)));
        }
        cout<<ans<<endl;
    }
}
//1244B