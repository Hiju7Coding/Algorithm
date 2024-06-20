#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Nhap a,b,c: ";cin>>a>>b>>c;
	if(a>b && a>c && b>c) cout<<a<<" "<<b<<" "<<c;
	if(a>b && a>c && b<c) cout<<a<<" "<<c<<" "<<b;
	if(b>a && b>c && a>c) cout<<b<<" "<<a<<" "<<c;
	if(b>a && b>c && a<c) cout<<b<<" "<<c<<" "<<a;
	if(c>b && c>a && b>a) cout<<c<<" "<<b<<" "<<a;
	if(c>b && c>a && b<a) cout<<c<<" "<<a<<" "<<b;
}