#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int A[maxn],int n);
int Total(int A[],int n);
int main(){
	int n,A[maxn];
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(A,n);
	cout<<"Result: "<<Total(A,n);
}
void Import_1_dimensional_array(int A[maxn],int n){
	if(n>0){
		Import_1_dimensional_array(A,n-1);
		cout<<"Enter A["<<n<<"]: ";cin>>A[n];
	}
}
int Total(int A[maxn],int n){
	if(n==1) return A[1];
	else return A[n]+Total(A,n-1);
}
