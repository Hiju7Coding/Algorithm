#include<iostream>
using namespace std;
int main(){
	int a1,b1,a2,b2,c1,c2;
	cout<<"Nhap a1,b1,c1 cua a1*x + b1*y = c1 "<<endl;cin>>a1>>b1>>c1;
	cout<<"\nNhap a2,b2,c2 cua a2*x + b2*y = c2 "<<endl;cin>>a2>>b2>>c2;
	if((a1==0 && b1==0 && c1==0 && a2==0 && b2==0 && c2==0) || ((1.0*a1/a2) == (1.0*b1/b2) && (1.0*a1/a2) == (1.0*c1/c2) && (1.0*b1/b2) == (1.0*c1/c2))) cout<<"He co vo so nghiem ";
    if((1.0*a1/a2) != (1.0*b1/b2)) cout<<"He co 1 nghiem duy nhat ";
    if((1.0*a1/a2) == (1.0*b1/b2) && (1.0*b1/b2) != (1.0*c1/c2) && (1.0*a1/a2) != (1.0*c1/c2)) cout<<"He vo nghiem ";
}