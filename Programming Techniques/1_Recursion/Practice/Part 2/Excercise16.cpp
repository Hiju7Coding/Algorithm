#include<iostream>
using namespace std;
long TotalSn(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	cout<<"Result: "<<TotalSn(n);
}
long TotalSn(int n){
	if(n==1) return 1;
	else{
	int z=1;
	for(int i=1;i<=n;i++) z=z*i;
	return z + TotalSn(n-1);
}
}
