#include<iostream>
using namespace std;
bool Up_number(int n);
int main(){
	int n;
	cout<<"Nhap n: ";cin>>n;
	if(Up_number(n)==true) cout<<"Number "<<n<<" is a up number";
	else cout<<"Number "<<n<<" is not a up number ";
}
bool Up_number(int n){
	if(n<10) return true;
	if(n%10 > (n/10)%10) return Up_number(n/10);
	else return false;
}
