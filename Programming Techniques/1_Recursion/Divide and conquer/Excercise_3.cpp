#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int A[maxn],int n);
int Total(int A[],int left,int right);
int main(){
	int n,A[maxn];
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(A,n);
	cout<<"Result: "<<Total(A,1,n);
}
void Import_1_dimensional_array(int A[maxn],int n){
	if(n>0){
		Import_1_dimensional_array(A,n-1);
		cout<<"Enter A["<<n<<"]: ";cin>>A[n];
	}
}
int Total(int A[maxn],int left,int right){
    if (left<=right){
    if (right==2){
    return A[right-1];
    }
    int mid= (left+right)/2;
    int lsum = Total(A,left,mid);
    int rsum = Total(A,mid+1,right);
    return lsum + rsum;
    }
    return 0;
}
