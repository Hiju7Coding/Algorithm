#include<iostream>
#include<math.h>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int a[],int &n){
    for(int i= 1;i<=n;i++){
    cout<<"Enter a["<<i<<"] : ";
	cin>>a[i];
}
}
int Prime_Count(int a[],int n);
int main(){
	int A[maxn],n;
	cout<<"Enter the number of elements: ";cin>>n;
	Import_1_dimensional_array(A,n);
	int T= Prime_Count(A,n);
	cout<<"Result: "<<T;
}
int Prime(int n){
	if(n<2) return 0;
	int k=sqrt(n);
	for(int i=2;i<=k;i++)
	if(n%i==0) return 0;
	return 1;
}
int Prime_Count(int a[],int n){
	if(n==1){
		if(Prime(a[1])) return 1;
		else return 0;
	}
	else{
	if(Prime(a[n])) return 1+Prime_Count(a,n-1);
	else return 0+Prime_Count(a,n-1);
}
}
