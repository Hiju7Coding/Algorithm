#include<iostream>
using namespace std;
int TotalSn(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	cout<<"Result: "<<TotalSn(n);
}
int TotalSn(int n){
	if(n==1) return 1;
	else return n*n + TotalSn(n-1);
}
