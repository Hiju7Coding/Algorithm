#include<iostream>
using namespace std;
long Totalxn(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	long T=Totalxn(n);
	cout<<"Result: "<<T<<" ";
}
long Totalxn(int n){
	if(n==1 || n==2) return 1;
	else return Totalxn(n-1)+(n-1)*Totalxn(n-2);
}
