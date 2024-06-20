#include<iostream>
using namespace std;
int main(){
   int a[]={4,3,7,9,2,6},*p;
   p= new int;
   p=&a[0]; cout<<*p<<endl;
   p=&a[4]; *p=*p+3; cout<<a[4]<<endl;
   p=p-3; cout<<*p<<endl;
   p=p+4; cout<<*p<<endl;
   delete p;
   return 0;
}
