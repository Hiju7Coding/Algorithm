#include<iostream>
#include<math.h>
using namespace std;
float Exponent(float a,int n);
int main(){
	int n;
	float x;
	cout<<"Enter x: ";cin>>x;
	cout<<"Enter the exponent: ";cin>>n;
	float T= Exponent(x,n);
	cout<<"Result: "<<T;
}
float Exponent(float a,int n){
	if(n==0) return 1;
	if(n>0 && n%2==0){
		float t=pow(a,n/2);
		return t*t;
	}
	if(n>0 && n%2!=0){
		float t=pow(a,(n-1)/2);
		return t*t*a;
	}
}
