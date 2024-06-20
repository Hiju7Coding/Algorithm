#include<iostream>
using namespace std;
int Count_digits(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	int t= Count_digits(n);
	cout<<"Number "<<n<<" has "<<t<<" digits";
}
int Count_digits(int n){
	if(n<10) return 1;
	else return 1+ Count_digits(n/10);
}
