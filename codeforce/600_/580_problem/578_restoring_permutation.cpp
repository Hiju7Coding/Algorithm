#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;int b[2*n+1],a[2*n+1],ans=1;
        for(int i=1;i<=2*n;i++)a[i]=1;
        for(int i=1;i<=n;i++)cin>>b[i],a[b[i]]--;
        for(int i=1;i<=n;i++)
        {int j=b[i]+1;
        while(a[j]==0)j++;
        if(j>2*n){ans=0;break;}else{b[n+i]=j;a[j]--;}
        }
        if(ans)
         for(int i=1;i<=n;i++)cout<<b[i]<<" "<<b[n+i]<<" ";
         else cout<<"-1";
        cout<<endl;
    }
}

//1315C