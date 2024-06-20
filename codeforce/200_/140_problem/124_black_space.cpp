#include <bits/stdc++.h>
using namespace std;
int main(){int t;
cin>>t;
while(t--){
int n;
cin>>n;
int c=0;int g=0;int x;
for(int i=0;i<n;i++){
cin>>x;
if(x==0)
c++;
else
{g=max(g,c);c=0;}}
cout<<max(g,c)<<endl;
}
 
}
//1829B