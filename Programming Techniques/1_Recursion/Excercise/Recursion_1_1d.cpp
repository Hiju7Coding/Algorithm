#include<iostream>
using namespace std;
long Total(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	long T= Total(n);
	cout<<"Result: "<<T<<" ";
}
long Total(int n){
    if(n==0) return 0;
    else{
    int s= 1;
    for(int i= n;i<=2*n;i++) s=s*i;
	return s + Total(n-1);
}
}
