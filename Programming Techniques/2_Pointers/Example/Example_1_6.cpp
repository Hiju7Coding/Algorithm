#include<iostream>
using namespace std;
int main(){
   int *p;
   int a=2021;
   cout<<&a<<endl;
   p=NULL;
   cout<<&p<<endl;
   cout<<p+a<<endl;
   return 0;
}
