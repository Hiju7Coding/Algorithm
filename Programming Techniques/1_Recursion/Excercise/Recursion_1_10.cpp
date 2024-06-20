#include<iostream>
#include<math.h>
using namespace std;
float Exponent(float a,int n);
int main(){
	int n;
	float a;
	cout<<"Enter a: ";cin>>a;
	cout<<"Enter the exponent: ";cin>>n;
	float T= Exponent(a,n);
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
