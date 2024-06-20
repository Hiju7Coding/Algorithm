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
void Quick_sort(int a[],int l,int r);
int main(){
	int a[maxn],n;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(a,n);
	Quick_sort(a,0,n-1);
	cout<<"\nResult: \n";
	Export_1_dimensional_array(a,n);
}
void Exchange(int &x,int &y){
	int r=y;
	y=x;
	x=r;
}
void Quick_sort(int a[],int l,int r){
    int x=a[(l+r)/2],i=l,j=r;
    do{
    while (a[i]<x) i++;
    while (a[j]>x) j--;
    if (i<=j) Exchange(a[i++],a[j--]);
    }while (i<j);
    if(l<j) Quick_sort(a,l,j);
    if(i<r) Quick_sort(a,i,r);
}
