#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int a[],int &n){
    for(int i= 1;i<=n;i++){
    cout<<"Enter a["<<i<<"] : ";
	cin>>a[i];
}
}
void Export_1_dimensional_array(int a[],int &n){
     for(int i= 1;i<=n;i++)
     cout<<a[i]<<" ";
}
int Arrange(int a[],int n,int k);
int main(){
	int A[maxn],n,k;
	cout<<"Enter the number of elements: ";cin>>n;
	Import_1_dimensional_array(A,n);
	cout<<"Enter the number of elements to move to the end: ";cin>>k;
    Arrange(A,n,k);
    Export_1_dimensional_array(A,n);
}
int Arrange(int a[],int n,int k){
	if(k>0){
	int x=a[1];
	for(int i=1;i<n;i++)
    a[i]=a[i+1];
    a[n]=x;
	return Arrange(a,n,k-1);
    } 
}
