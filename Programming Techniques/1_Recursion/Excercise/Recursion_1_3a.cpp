#include<iostream>
using namespace std;
double X(int n);
double Y(int n);
int main(){ // x3=50.2162 y3= 22.0528
    int n;
    cout<<"Enter n: ";cin>>n;
    double T=X(n);
    double Z=Y(n);
    cout<<"Result: "<<T<<" "<<Z;
}
double X(int n){
    if(n==0) return 1;
    else return X(n-1)/3+Y(n-1)/2+27;
}
double Y(int n){
    if(n==0) return 2;
    else return X(n-1)/5+Y(n-1)/7+11;
}
