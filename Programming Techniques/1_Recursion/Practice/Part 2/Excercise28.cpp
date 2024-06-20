#include<iostream>
using namespace std;
long x(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;	
	long T=x(n);
	cout<<"Result: "<<T;
}
long x(int n){
	if(n==0 || n==1) return 1;
	else{
	int S=0;
	for(int i=0;i<n;i++){
		S=S+(n-i)*x(i);
	}
	return S;
}
}
