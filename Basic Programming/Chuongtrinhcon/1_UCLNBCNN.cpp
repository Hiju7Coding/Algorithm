#include<iostream>
using namespace std;
int UCLN(int a,int b){
	int r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}
int BCNN(int a,int b){
	int r= UCLN(a,b);
	return a*b/r;
}
int main(){
	int a,b;
	cout<<"Nhap a,b: ";cin>>a>>b;
	int p= UCLN(a,b);
	int q= BCNN(a,b);
	cout<<"Uoc chung lon nhat cua a va b la: "<<p<<endl;
	cout<<"Boi chung nho nhat cua a va b la: "<<q<<endl;
}