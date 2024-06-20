#include <iostream>
using namespace std;
int main(){
   int a[]={15,2021,6,14,30,3},*p;
   p= new int;
   p=&a[1];
   cout<<*p<<endl;
   p=&a[4];
   *p=*p+3;
   cout<<a[4]<<endl;
   cout<<*(p-2)<<endl;
   cout<<*(p+1)<<endl;
   delete p;
   return 0;
}
