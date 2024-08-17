#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,k,t;
cin>>t;
while(t--){
cin>>n>>k;
if((k*k)<=n && (n+k)%2==0) cout<<"YES\n";
else  cout<<"NO\n";
}
}
//1327A