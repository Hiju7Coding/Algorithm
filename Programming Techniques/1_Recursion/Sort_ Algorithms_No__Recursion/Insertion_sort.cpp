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
void Insertion_sort(int a[],int n);
int main(){
	int a[maxn],n,x;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(a,n);
	Insertion_sort(a,n);
	cout<<"\nResult: \n";
	Export_1_dimensional_array(a,n);
}
void Insertion_sort(int a[],int n){
	int pos, x;
	for(int i = 1; i < n; i++){ 
	x = a[i]; 
	pos = i;
	while(pos > 0 && x < a[pos-1]){
		a[pos] = a[pos-1];	
		pos--;
	}
	a[pos] = x;
	}
}
	
	
