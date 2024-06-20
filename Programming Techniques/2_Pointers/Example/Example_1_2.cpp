#include<iostream> 
using namespace std;
int main(){
    int a[]={20,11,2020,26,3,2020}, *p;
    p= new int;
    p=&a[0];
    cout<<*p<<endl;
    p=&a[4];
    *p=*p+3;
    cout<<a[4]<<endl;
    p=p-3;
    cout<<*p<<endl;
    p=p+4;
    cout<<*p<<endl;
    delete p;
    return 0;
}
