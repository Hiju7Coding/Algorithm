#include<iostream>
#include<math.h>
using namespace std;
double TotalSxn(float x,int n);
int main(){
	int n;
	float x;
	cout<<"Enter x: ";cin>>x;
	cout<<"Enter n: ";cin>>n;
	cout<<"Result: "<<TotalSxn(x,n);
}
double TotalSxn(float x,int n){
	if(n==1) return x;
	else return pow(-1,n+1)*pow(x,n)+ TotalSxn(x,n-1);
}
