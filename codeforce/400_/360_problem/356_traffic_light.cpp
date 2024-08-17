#include<bits/stdc++.h> 
using namespace std;
int t,n;
char q;
string x; 
int main(){
    cin>>t;
    while(t--){
        int ans=0,k=0;
        cin>>n>>q>>x;
        x+=x;
        for(int i=x.size()-1;i>=0;i--){
            if(x[i]=='g') k=i;
            if(x[i]==q) ans=max(ans,k-i);
        }
        cout<<ans<<endl;
    }
}
//1744C