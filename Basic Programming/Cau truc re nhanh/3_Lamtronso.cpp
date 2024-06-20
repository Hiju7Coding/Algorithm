#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Nhap diem thi 3 mon: ";cin>>a>>b>>c;
	float sum=a+b+c;
	int p=sum;
	if(sum - p < 0.5 ) cout<<"Diem thi la: "<<p+0.5;
	if(sum - p < 1 and sum - p > 0.5) cout<<"Diem thi la: "<<p+1;
}