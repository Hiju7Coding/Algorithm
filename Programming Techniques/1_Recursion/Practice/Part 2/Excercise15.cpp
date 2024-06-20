#include<iostream>
using namespace std;
float TotalSn(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	cout<<"Result: "<<TotalSn(n);
}
float TotalSn(int n){
	if(n==0) return 0;
	else return  1.0*n/(n+1) + TotalSn(n-1);
}
