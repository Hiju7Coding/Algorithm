#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int ao[n];
vector<pair<int,int>> v;
for(int i=0;i<n;i++)
{cin>>ao[i];
v.push_back({ao[i],i});}
 
sort(v.begin(), v.end());
int b[n];
for(int i=0;i<n;i++){
  cin>>b[i];
}
sort(b,b+n);
int cu[n];
for(int i=0;i<n;i++){
   cu[v[i].second]=b[i];
}
for(int i=0;i<n;i++) cout<<cu[i]<<" ";
cout<<"\n";
 
}
    return 0;
}
//1833B