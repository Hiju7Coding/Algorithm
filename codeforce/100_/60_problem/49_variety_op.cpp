#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    cout<<((a-b)%2?-1:a!=b?2:a==0&&b==0?0:1)<<endl;
    }
}
//1556A
