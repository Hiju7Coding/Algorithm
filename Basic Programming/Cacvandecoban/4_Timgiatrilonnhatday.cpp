#include<iostream>
#define maxn 100
using namespace std;
int Max(int a[maxn],int n){
	int b=a[0];
	for(int i=1;i<n;i++)
	if(b<a[i]) b=a[i];
	
	return b;
}
int main(){
	int a[maxn],n;
	cout<<"Enter n: ";cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<"Gia tri lon nhat day: "<<Max(a,n);
}