#include<iostream>
main(){
int64_t a,b;std::cin>>a;
while(a--){
std::cin>>b;
while(b%2==0)b/=2;
std::cout<<(b%2==1&&b>1?"YES\n":"NO\n");
}}
//1475A