#include<iostream>
#include<math.h>
using namespace std;
int An(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	cout<<"Result: "<<An(n);
}
int An(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 3;
	else return 24*An(n-1)+25*An(n-2)+10*An(n-3)+2018;
}
