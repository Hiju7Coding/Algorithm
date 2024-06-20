#include<iostream>
using namespace std;
int Sum_of_digits(int n);
int main(){
	int n;
	cout<<"Enter number: ";cin>>n;
	int t= Sum_of_digits(n);
	cout<<"Sum of digits of number "<<n<<" is "<<t;
}
int Sum_of_digits(int n){
	if(n<10) return n;
	else return n%10 + Sum_of_digits(n/10);
}
