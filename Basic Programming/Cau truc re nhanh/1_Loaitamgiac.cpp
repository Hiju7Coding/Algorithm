#include<iostream>
#include<math.h>
using namespace std;
int tamgiacdeu(int a,int b,int c){
	if(a == b && a == c && b == c) return 1;
	return 0;
}
int tamgiacvuong(int a,int b,int c){
	if(a*a+b*b == c*c || a*a+c*c == b*b || b*b+c*c == a*a) return 1;
	return 0;
}
int tamgiaccan(int a,int b,int c){
	if(a==b || a==c ||b==c) return 1;
	return 0;
}
int main(){
	int a,b,c;
	cout<<"Nhap a,b,c: ";cin>>a>>b>>c;
	if(a+b >=c || b+c >= a || a+c >= b){
	   if(tamgiacdeu(a,b,c)) cout<<"a,b,c la so do 3 canh tam giac deu \n";
	   else if(tamgiacvuong(a,b,c)) cout<<"a,b,c la so do 3 canh tam giac vuong \n";
	   else if(tamgiaccan(a,b,c)) cout<<"a,b,c la so do 3 canh tam giac can \n";
	   else cout<<"a,b,c la so do 3 canh tam giac thuong\n";
	}
}