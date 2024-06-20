#include<iostream>
using namespace std;
double TotalSn(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	cout<<"Result: "<<TotalSn(n);
}
double TotalSn(int n){
	if(n==1) return 1;
	else{
		int s=0;
		for(int i=1;i<=n;i++) s=s+i;
		return 1.0/(s)+ TotalSn(n-1);
	}
}
