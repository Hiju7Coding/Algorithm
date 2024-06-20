#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int a[],int &n){
    for(int i= 0;i<n;i++){
    cout<<"Enter a["<<i<<"] : ";
	cin>>a[i];
}
}
int LinearSearch(int a[],int n,int x);
int main(){
	int a[maxn],n,x;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(a,n);
	cout<<"Enter x: ";cin>>x;
	cout<<LinearSearch(a,n,x);
}
int LinearSearch ( int a[], int n, int x ){
    int i = 0; 
    a[n] = x; 
    while (a[i]!=x) i++;
    if( i==n) return -1; 
    return i; 
}
