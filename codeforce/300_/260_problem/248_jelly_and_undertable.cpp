#include<iostream>
using namespace std;int main(){
long long a,b,n,x,t,i;cin>>t;
  while(t--){
    cin>>a>>b>>n;
    for(i=0;i<n;i++){
        cin>>x;
        b+=min(x,a-1);
    }cout<<b<<endl;
   }
}
//1875A