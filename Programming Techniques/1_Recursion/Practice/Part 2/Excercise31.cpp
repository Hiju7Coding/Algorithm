#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int A[maxn],int n);
void Export_1_dimensional_array(int A[maxn],int n);
int main(){
	int n,A[maxn];
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(A,n);
	cout<<"Result: "<<endl;
	Export_1_dimensional_array(A,n);
}
void Import_1_dimensional_array(int A[maxn],int n){
	if(n>0){
		Import_1_dimensional_array(A,n-1);
		cout<<"Enter A["<<n<<"]: ";cin>>A[n];
	}
}
void Export_1_dimensional_array(int A[maxn],int n){
	if(n>0){
		Export_1_dimensional_array(A, n-1);
		cout<<"A["<<n<<"]: "<<A[n]<<endl;
	}
}

