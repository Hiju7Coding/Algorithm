#include<iostream>
#include<math.h>
using namespace std;
double Square_root_2(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	cout<<"Result: "<<Square_root_2(n);
}
double Square_root_2(int n){
	if(n==1) return sqrt(2);
	else return sqrt(2 + Square_root_2(n-1));
}
