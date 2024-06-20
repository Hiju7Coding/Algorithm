#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cout<<"Nhap toa do diem A: ";cin>>x1>>y1;
	cout<<"Nhap toa do diem B: ";cin>>x2>>y2;
	cout<<"Nhap toa do diem C: ";cin>>x3>>y3;
	cout<<"Nhap toa do diem D: ";cin>>x4>>y4;
	int xe,ye,xf,yf;
	if(x3>=x1) xe=x3;
	else xe=x1;
	if(y3>=y1) ye=y3;
	else ye=y3;
	if(x2<=x4) xf=x2;
	else xf=x4;
	if(y2<=y4) yf=y2;
	else yf=x4;
	int a,b;
	a= -xe+xf;
	b= -ye+yf;
	int S= a*b;
	cout<<"Dien tich: "<<S<<endl;
}