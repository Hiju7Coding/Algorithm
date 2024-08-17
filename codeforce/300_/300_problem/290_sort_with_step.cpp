#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){

int n,k,c=0,x;
cin>>n>>k;
for(int i=1;i<n+1;i++){
cin>>x;
c+=i%k!=x%k;

      }
cout<<((c>2)?-1:c/2)<<endl;
}
}

//1823B