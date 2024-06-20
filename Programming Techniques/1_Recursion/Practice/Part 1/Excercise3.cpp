#include<iostream>
using namespace std;
int Count_odd_digitsdemchusole(int n);
int main(){
	int n;
	cout<<"Enter number: ";cin>>n;
	int t= Count_odd_digitsdemchusole(n);
	cout<<"Number "<<n<<" has "<<t<<" odd digits";
}
int Count_odd_digitsdemchusole(int n){
	if(n<10 && n%2!=0 ){
	if(n%2!=0 ) return 1;
	else return 0;
    }
	if(n%2!=0) return 1+ Count_odd_digitsdemchusole(n/10);
	else return Count_odd_digitsdemchusole(n/10);
}
