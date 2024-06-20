#include<iostream>
using namespace std;
long long Total(int n);
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	long long T=Total(n);
	cout<<"Result: "<<T<<" ";
}
long long Total(int n){
    if(n==1) return 1;
    else{
    int Z= 1;
    for(int i= 1;i<=n;i++) Z=Z*i;
	return Z+ Total(n-1);
}
}

