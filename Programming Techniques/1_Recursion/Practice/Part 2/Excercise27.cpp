#include<iostream>
using namespace std;
long X(int n,int S);
int main(){
	int n,S=0;
	cout<<"Enter n: ";cin>>n;
	long T=X(n,S);
	cout<<"Result: "<<T;
}
long X(int n,int S){
	if(n==1) return 1;
	S=S+X(n-1,S);
	return n*S;
}
