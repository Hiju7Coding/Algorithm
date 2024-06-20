#include<iostream>
using namespace std;
int Combination(int n,int k);
void Triangle(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	Triangle(n);
}
int Factorial(int n){
	if(n==1 ||n==0 ) return 1;
	else return n*Factorial(n-1);
}
int Combination(int n,int k){
	int Coefficient =Factorial(n)/(Factorial(n-k)*Factorial(k));
	return Coefficient;
}
void Triangle(int n){
	for(int i= 0;i<n;i++){
		for(int j=n;j>i;j--) cout<<" ";
		for(int k=0;k<=i;k++) cout<<Combination(i,k)<<" ";
		cout<<endl;
	}
}
