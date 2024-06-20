#include<iostream>
#include<math.h>
using namespace std;
int Yn(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	cout<<"Result: "<<Yn(n);
}
int Yn(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 3;
	else return Yn(n-1)+2*Yn(n-2)+3*Yn(n-3);
}
