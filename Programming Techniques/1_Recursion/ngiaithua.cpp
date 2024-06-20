#include<iostream>
using namespace std;
int Tong(int n,int &i,int &t){
	if(i!=n){
		t=t*i;
		i=i+1;
		return t+Tong(n,i,t);
	}
	else return t*n;
}
int main(){
	int n,i=1,t=1;
	cout<<"Enter n: ";cin>>n;
	cout<<Tong(n,i,t);
}