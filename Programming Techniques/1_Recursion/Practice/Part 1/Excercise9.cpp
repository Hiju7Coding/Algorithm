#include<iostream>
using namespace std;
bool Exponent_3(int n);
int main(){
	int n;
	cout<<"Enter number: ";cin>>n;
	if(Exponent_3(n)==true) cout<<n<<" has the form of 3 exponents k";
	else cout<<n<<" has no the form of 3 exponents k'";
}
bool Exponent_3(int n){
	if(n==1 || n==3 ) return true;
	if(n%3==0) return Exponent_3(n/3);
	else return false;
}
