#include<iostream>
#include<math.h>
using namespace std;
int Count_digits(int n);
int Find_reverse_number(int n,int k);
int main(){ // 237654 ->  456732
	int n;
	cout<<"Nhap n: ";cin>>n;
	int t= Find_reverse_number(n,Count_digits(n));
	cout<<"Reversed number of "<<n<<" is: "<<t;
}
int Count_digits(int n){
	if(n<10) return 1;
	else return 1+ Count_digits(n/10);
}
int Find_reverse_number(int n,int k){
	if(n<10) return n;
	return n%10*pow(10,k-1)+ Find_reverse_number(n/10,k-1);
}
