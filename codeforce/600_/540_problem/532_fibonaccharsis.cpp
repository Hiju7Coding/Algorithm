#include<bits/stdc++.h>
using namespace std;
int p,q,n;
int calc(int q,int x,int y){
if(x<0)return 0;
if(q==1)return 1;
return calc(q-1,y-x,x);
}
int main(){
scanf("%d",&p);
while(p--){
int res=0;cin>>n>>q;
for(int i=0;i<=n-i;i++)res+=calc(q,n-i,n);
cout<<res<<'\n';
}
return 0;
} 
//1853B