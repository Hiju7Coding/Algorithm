#include<iostream>
using namespace std;
int Combination(int n,int k);
int main(){
	int n,k;
	cout<<"Enter n: ";cin>>n;
	cout<<"Enter k: ";cin>>k;
	cout<<"Result: "<<Combination(n,k);
}
int Combination(int n,int k){
	if(n>=0){
	if(k==0 || k==n) return 1;
	else return Combination(n-1,k) + Combination(n-1,k-1);
}
}

