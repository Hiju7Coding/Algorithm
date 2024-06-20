#include<iostream>
using namespace std;
int t,n,m,a,b;
long long x1,x2;
int main(){
cin>>t;
while(t--){
x1=x2=0;
cin>>n>>m;
for(int i=0;i<n;i++)cin>>a,x1+=a;
for(int j=0;j<m;j++)cin>>a,x2+=a;
cout<<(x1>x2?"Tsondu\n":(x1<x2?"Tenzing\n":"Draw\n"));
}
return 0;
}