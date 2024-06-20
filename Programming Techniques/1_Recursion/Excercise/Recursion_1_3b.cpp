#include<iostream>
using namespace std;
double TotalXY(int n);
int main(){ // x3=50.2162 y3= 22.0528
    int n;
    cout<<"Nhap n: ";cin>>n;
    TotalXY(n);
}
double TotalXY(int n){
   double x0=1, y0=2,X,Y;
    for (int i=1;i<=n;i++){
        X=x0/3+y0/2+27;
        Y=x0/5+y0/7+11;
        x0=X;
        y0=Y;
    }
    cout<<"Total X"<<n<<"= "<<X<<endl;
    cout<<"Total Y"<<n<<"= "<<Y;
}
