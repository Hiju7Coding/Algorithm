#include<iostream>
using namespace std;
int *test(int a);
int main(){ 
   int a=12;
   cout<<test(a)<<endl;
   cout<<test(a)+14;
   return 0;
}
int *test(int a){
   int *p;
   p= &a;
   return p;
}
