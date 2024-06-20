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
	else{
		int s=0;
		for(int i=1;i<=n;i++) s=s+i;
		return 1.0*pow(x,n)/(s)+ TotalSxn(x,n-1);
	}
}
