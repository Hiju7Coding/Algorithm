#include<iostream>
using namespace std;
int Find_the_first_number(int n);
int main(){
	int Number;
	cout<<"Enter Number: ";cin>>Number;
	int First_number = Find_the_first_number(Number);
	cout<<"The first digit of the number "<<Number<<" is: "<<First_number;
}
int Find_the_first_number(int n){
	if(n<10) return n;
	else return Find_the_first_number(n/10);
}
