#include<iostream>
using namespace std;
long Total(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	long T=Total(n);
	cout<<"Result: "<<T<<" ";
}
long Total(int n){
    if(n==1) return 1;
    else return n+Total(n-1);
}
