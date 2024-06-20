#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int xa,ya,xb,yb,xm,ym;
	cout<<"Nhap diem A: ";cin>>xa>>ya;
	cout<<"Nhap diem B: ";cin>>xb>>yb;
	cout<<"Nhap diem M: ";cin>>xm>>ym;
	int ab=sqrt(pow(xa-xb,2) + pow(ya-yb,2));
	int am=sqrt(pow(xa-xm,2) + pow(ya-ym,2));
	int bm=sqrt(pow(xm-xb,2) + pow(ym-yb,2));
	cout<<"AB: "<<ab<<endl;
	if(am+bm == ab) cout<<"M thuoc AB\n";
	else cout<<"M khong thuoc AB\n";
	if(xa-xb == 0) cout<<"x= "<<xa;
	else if(ya-yb == 0) cout<<"y= "<<ya;
	else{
	    float a = 1.0*(ya-yb)/(xa-xb);
	    float b= ya - 1.0*a*xa;
	    cout<<"Phuong trinh duong thang di qua AB: y= "<<a<<"*x +"<<b<<" "<<endl;
	}
	xm=(xa+xb)/2;
	ym=(ya+ym)/2;
	int R=ab/2;
	cout<<"Phuong trinh duong tron (x -"<<xm<<")^2 + (y -"<<ym<<")^2 = "<<R*R<<endl;
	float c=-1.0*(xa-xb)/(ya-yb);
	float d= ya-1.0*c*xa;
	cout<<"Phuong trinh duong thang di qua A va vuong goc AB la: y= "<<c<<"*x + "<<d<<" \n";	
}