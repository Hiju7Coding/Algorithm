#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int xa,ya,xb,yb,xc,yc;
	cout<<"Nhap toa do A: ";cin>>xa>>ya;
	cout<<"Nhap toa do B: ";cin>>xb>>yb;
	cout<<"Nhap toa do C: ";cin>>xc>>yc;
	float xg,yg;
	xg=(xa+xb+xc)/3.0;
	yg=(ya+yb+yc)/3.0;
	cout<<"Toa do G("<<xg<<";"<<yg<<")"<<endl;
	int AB,AC,BC;
	AB=sqrt(pow(xa-xb,2) + pow(ya-yb,2));
	AC=sqrt(pow(xa-xc,2) + pow(ya-yc,2));
	BC=sqrt(pow(xb-xc,2) + pow(yb-yc,2));
	float p= (AB+AC+BC)/2.0;
	float s= sqrt(p*(p-AB)*(p-AC)*(p-BC));
	float r= s/p;
	float dtSr=3.14*pow(r,2);
	cout<<"Dien tich hinh tron noi tiep: "<<dtSr<<endl;
	float R=AB*AC*BC/(3.0*s);
	float dtSR=3.14*pow(R,2);
	cout<<"Dien tich hinh tron ngoai tiep: "<<dtSR<<endl;
}