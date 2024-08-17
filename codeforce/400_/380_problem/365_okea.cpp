#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--)
{int n,k,f=0;
cin>>n>>k;
if(k==1 || n%2==0)
f=1;
 if(f==0)
 cout<<"NO"<<"\n";
 else{cout<<"YES"<<"\n";
 for(int i=0;i<n;i++)
 {for(int j=0;j<k;j++)
     cout<<(i+1+j*n)<<" ";
     cout<<"\n";
 }
 }
  
}
}
//1634C