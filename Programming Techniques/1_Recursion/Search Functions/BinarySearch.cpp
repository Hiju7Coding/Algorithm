#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int a[],int &n){
    for(int i=0;i<n;i++){
    cout<<"Enter a["<<i<<"] : ";
	cin>>a[i];
}
}
int BinarySearch(int a[],int n,int x);
int main(){
	int a[maxn],n,x;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(a,n);
	cout<<"Enter x: ";cin>>x;
	cout<<BinarySearch(a,n,x);
}
int BinarySearch(int a[],int n,int x){
  int left=0,right=n-1,mid;
  do{
        mid=(left+right)/2;
        if(x==a[mid]) return mid;
        else
        if(x<a[mid])
        right=mid-1;
        else
        left=mid+1;
  }while(left<=right);
  return -1;
}
