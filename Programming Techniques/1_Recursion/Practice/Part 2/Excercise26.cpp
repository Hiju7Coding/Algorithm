#include<iostream>
using namespace std;
double TotalSn(int n);
long f(int n);
int main(){ // 1/2 1 1 1 5/6 S5=4.33333
    int n;
    cout<<"Enter n: ";cin>>n;
    double T= TotalSn(n);
    cout<<T<<endl;
}
long f(int n){
    if(n==1 || n==2) return 1;
    else return f(n-1) + f(n-2);
}
double TotalSn(int n){
    if(n==1) return 1.0/(1+f(1));
    else return n/(1.0+f(n)) + TotalSn(n-1);
}
