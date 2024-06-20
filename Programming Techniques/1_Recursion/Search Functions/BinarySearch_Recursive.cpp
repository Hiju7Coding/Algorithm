#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int a[],int &n){
    for(int i= 0;i<n;i++){
    cout<<"Enter a["<<i<<"] : ";
	cin>>a[i];
}
}
int BinarySearch_Recursive(int a[],int n,int x,int left,int right);
int main(){
	int a[maxn],n,x;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(a,n);
	cout<<"Enter x: ";cin>>x;
	cout<<BinarySearch_Recursive(a,n,x,0,n-1);
}
int BinarySearch_Recursive(int a[],int n,int x,int left,int right){
    if(left>right) return -1;
    int mid=(left+right)/2;
    if(x==a[mid]) return mid;
    if(x<a[mid]) return BinarySearch_Recursive(a,n,x,left,mid-1);
    return BinarySearch_Recursive(a,n,x,mid+1,right);
}
