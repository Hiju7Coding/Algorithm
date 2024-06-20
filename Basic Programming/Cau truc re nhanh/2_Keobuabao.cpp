#include<iostream>
using namespace std;
int main(){
	char x[1],y[1];
	cout<<"Chon keo(k),bua(b),bao(a): ";cin>>x>>y;
	if((x== "k" && y== "a") || (x== "b" && y== "k") || (x== "a" && y== "b") ) cout<<"Nguoi choi 1 thang\n";
	else cout<<"Nguoi choi 2 thang ";
}