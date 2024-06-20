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
	int x1=1,x2=1,x3;
	for(int i=3;i<=n;i++){
		x3=x2+(i-1)*x1;
		x1=x2;
		x2=x3;
	}
	return x3;
}
