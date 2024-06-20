#include<iostream>
using namespace std;
main(){
int t,n,a,b,c,d;
for(cin>>t;t--;){
cin>>n>>a>>b>>c>>d;
puts(((a-b)*n>c+d || (a+b)*n<c-d)?"No":"Yes");
}}
//1341A
