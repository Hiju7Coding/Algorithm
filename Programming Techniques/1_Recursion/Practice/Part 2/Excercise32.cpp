#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int A[maxn],int n);
int max(int a[],int n);
int main(){
	int n,A[maxn];
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(A,n);
	cout<<"Result: "<<max(A,n);
}
void Import_1_dimensional_array(int A[maxn],int n){
	if(n>0){
		Import_1_dimensional_array(A,n-1);
		cout<<"Enter A["<<n<<"]: ";cin>>A[n];
	}
}
int max(int a[],int n){
	if(n==1) return a[1];
	if(a[n]<max(a,n-1)) return max(a,n-1);
	else return a[n];
}



