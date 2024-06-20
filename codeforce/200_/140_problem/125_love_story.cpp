#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s,g="codeforces";
    int c=0;
cin>>s;
for(int i=0;i<10;i++){
    if(s[i]!=g[i])
        c++;
}
cout<<c<<endl;
}
}
//1829A