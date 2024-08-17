#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n;
    
    int c[3]={0};
    for(int i=0;i<n;i++){
        cin>>k;
        c[k%3]++;
    }
    cout<<max(c[0]-c[2],max(c[2]-c[1],c[1]-c[0]));
    cout<<"\n";
   
    }
}
//1490B