#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Nhap a,b,c: ";cin>>a>>b>>c;
	float p=(a+b+c)/2;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Chu vi: "<<p<<endl;
	cout<<"Dien tich: "<<s<<endl;
	cout<<"Do dai AH: "<<2.0*s/a;
}