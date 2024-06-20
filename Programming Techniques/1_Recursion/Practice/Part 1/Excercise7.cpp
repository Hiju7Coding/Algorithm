#include<iostream>
using namespace std;
int Greatest_common_divisor(int a,int b);
int main(){
	int x,y;
	cout<<"Enter x: ";cin>>x;
	cout<<"Enter y: ";cin>>y;
	int t= Greatest_common_divisor(x,y);
	cout<<"The greatest common divisor of "<<x<<" and "<<y<<" is: "<<t;
}
int Greatest_common_divisor(int a,int b){
	if(a==0 || b==0) return a+b;
	if(a>b) return Greatest_common_divisor(a%b,b);
	else return Greatest_common_divisor(b%a,a);
}
