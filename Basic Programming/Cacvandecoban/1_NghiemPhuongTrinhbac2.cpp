#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c,Delta;
    cout<<"Nhap a,b,c cua a*x^2 + b*x + c = 0 "<<endl;cin>>a>>b>>c;
	Delta = pow(b,2) - 4*a*c;
	if(Delta == 0) cout<<"Phuong trinh co nghiem kep: x= "<<-1.0*b/(2*a);
	if(Delta < 0) cout<<"Phuong trinh vo nghiem ";
	if(Delta > 0) cout<<"Phuong trinh co hai nghiem phan biet x1= "<<(-1.0*b + sqrt(Delta))/(2*a)<<" va x2= "<<(-1.0*b - sqrt(Delta))/(2*a);	
}