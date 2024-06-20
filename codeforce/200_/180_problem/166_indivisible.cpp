#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i;
cin>>t;
while(t--){
cin>>n;
if(n==1)cout<<1;
else if(n%2==1)cout<<-1;
else{
for(i=1;i<=n;i+=2)
cout<<i+1<<" "<<i<<" ";
}
cout<<endl;
}
}
//1818B