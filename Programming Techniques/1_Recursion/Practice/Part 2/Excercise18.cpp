#include<iostream>
#include<math.h>
using namespace std;
double TotalSxn(float x,int n);
int main(){
	int n;
	float x;
	cout<<"Enter n: ";cin>>n;
	cout<<"Enter x: ";cin>>x;
	cout<<"Result: "<<TotalSxn(x,n);
}
double TotalSxn(float x,int n){
	if(n==1) return x;
	else return pow(x,2*n+1) + TotalSxn(x,n-1);
}
