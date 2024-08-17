#include<bits/stdc++.h>
using namespace std;
int main(){   
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        s=s+t;
        cout<<set<char>(s.begin(),s.end()).size()-1<<endl;
    }
    return 0;
}
//1721A