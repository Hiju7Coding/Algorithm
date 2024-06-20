#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string pi = "314159265358979323846264338327";
string s;
cin>>s;
int rs=0;
for(int i=0;i<s.size()&&s[i]==pi[i];i++)
rs++;
cout<<rs<<endl;
}
}
//1790A