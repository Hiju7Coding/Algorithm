#include<iostream>
using namespace std;
float TotalSn(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	cout<<"Result: "<<TotalSn(n);
}
float TotalSn(int n){
	if(n==1) return 1;
	else return  1.0/(n) + TotalSn(n-1);
}
