#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int xa,ya,xb,yb,xc,yc,xd,yd;
	cout<<"Nhap toa do A: ";cin>>xa>>ya;
	cout<<"Nhap toa do B: ";cin>>xb>>yb;
	cout<<"Nhap toa do C: ";cin>>xc>>yc;
	cout<<"Nhap toa do D: ";cin>>xd>>yd;
	int xi=xa-xb;
	int yi=ya-yb;
	int xp=xc-xd;
	int yp=yc-yd;
	int AB=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
	int CD=sqrt(pow(xc-xd,2)+pow(yc-yd,2));
	if(xi/xp == yi/yp && AB == CD ) cout<<"ABCD la hinh binh hanh";
}