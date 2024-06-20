#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int a[],int &n){
    for(int i= 1;i<=n;i++){
    cout<<"Enter a["<<i<<"] : ";
	cin>>a[i];
}
}
int Total(int A[maxn],int n);
int main(){
	int A[maxn],n;
	cout<<"Enter the number of elements: ";cin>>n;
	Import_1_dimensional_array(A,n);
	int T=Total(A,n);
	cout<<"Result: "<<T;
}
int Total(int A[maxn],int n){
	if(n==1) return A[1];
	else return A[n]+Total(A,n-1);
}

