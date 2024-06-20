#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    string valid[t];
    for(int i = 0;i < t; i++){
        int n,m;
        cin>>n>>m;
        valid[i] = (n >= m && (n%2) == (m%2)?"Yes":"No");
    }
    
    for(int i = 0; i < t; i++){
        cout<<valid[i]<<endl;
    }
}