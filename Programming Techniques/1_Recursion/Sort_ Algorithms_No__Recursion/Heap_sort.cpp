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
void Heap_sort(int arr[], int &n);
int main(){
	int a[maxn],n,x;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(a,n);
	Heap_sort(a,n);
	cout<<"\nResult: \n";
	Export_1_dimensional_array(a,n);
}
void Exchange(int &x,int &y){
	int r=y;
	y=x;
	x=r;
}
void heapify(int arr[], int n, int i) 
{ 
    int largest = i;  
    int l = 2*i + 1;  
    int r = 2*i + 2;  
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
    if (largest != i) { 
        Exchange(arr[i], arr[largest]); 
        heapify(arr, n, largest); 
    } 
} 
void Heap_sort(int arr[], int &n) 
{ 
    for (int i = n/2 - 1; i >= 0; i--) heapify(arr, n, i); 
    for (int i=n-1; i>0; i--) { 
        Exchange(arr[0], arr[i]); 
        heapify(arr, i, 0); 
    } 
} 
