#include<iostream>
using namespace std;
int Combination(int n,int k);
int main(){
	int n,k;
	cout<<"Enter n: ";cin>>n;
	cout<<"Enter k: ";cin>>k;
	int T=Combination(n,k);
	cout<<"Result: "<<T;
}
int Factorial(int n){
	if(n==1) return 1;
	else return n*Factorial(n-1);
}
int Combination(int n,int k){
	int Coefficient =Factorial(n)/(Factorial(n-k)*Factorial(k));
	return Coefficient;
}

