#include<iostream>
using namespace std;
double TotalSn(int n);
long f(int n);
int main(){ 
    int n;
    cout<<"Enter n: ";cin>>n;
    cout<<"Result: "<<f(n);
}
long f(int n){
    if(n==1 || n==2) return 1;
    else return f(n-1) + f(n-2);
}
