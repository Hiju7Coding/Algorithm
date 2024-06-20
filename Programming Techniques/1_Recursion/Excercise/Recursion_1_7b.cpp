#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int a[],int &n){
    for(int i= 1;i<=n;i++){
    cout<<"Enter a["<<i<<"] : ";
	cin>>a[i];
}
}
int max(int a[],int n);
int main(){
	int A[maxn],n;
	cout<<"Enter the number of elements: ";cin>>n;
	Import_1_dimensional_array(A,n);
	int T=max(A,n);
	cout<<"Result: "<<T;
}
int max(int a[],int n){
	if(n==1) return a[1];
	if(a[n]<max(a,n-1)) return max(a,n-1);
	else return a[n];
}
