#include<iostream>
using namespace std;
int Largest_digit(int n,int max);
int main(){
	int n,max=0;
	cout<<"Enter number: ";cin>>n;
	int t = Largest_digit(n,max);
	cout<<"Largest digit of the number "<<n<<" is : "<<t;
}
int Largest_digit(int n,int max){
	if(n<10){
    if(n<max) return max;
	else return n;
    }
	if(n%10 > max) return Largest_digit(n/10,n%10);
	else return Largest_digit(n/10,max);
}
