#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int a[],int &n){
    for(int i= 0;i<n;i++){
    cout<<"Enter a["<<i<<"] : ";
	cin>>a[i];
}
}
void Export_1_dimensional_array(int a[],int &n){
    for(int i= 0;i<n;i++){
    cout<<" a["<<i<<"] : ";
	cout<<a[i]<<endl;
}
}
void Interchange_sort(int a[], int &n);
int main(){
	int a[maxn],n,x;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(a,n);
	Interchange_sort(a,n);
	cout<<"\nResult: \n";
	Export_1_dimensional_array(a,n);
}
void Exchange(int &x,int &y){
	int r=y;
	y=x;
	x=r;
}
void Interchange_sort(int a[], int &n){
    for(int i=0; i<n-1;i++)
    for(int j=i+1;j<n ;j++)
    if (a[i]>a[j]){
    	cout<<" i";
	Exchange(a[i],a[j]);
}
}
