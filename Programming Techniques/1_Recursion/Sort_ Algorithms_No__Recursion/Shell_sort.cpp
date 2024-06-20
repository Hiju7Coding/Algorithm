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
void Shell_sort(int a[],int n);
int main(){
	int a[maxn],n,x;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(a,n);
	Shell_sort(a,n);
	cout<<"\nResult: \n";
	Export_1_dimensional_array(a,n);
}
void Shell_sort(int a[], int n){
	int interval, i, j, temp;
	for(interval = n/2; interval > 0; interval /= 2){
		for(i = interval; i < n; i++){
			temp = a[i];
			for(j = i; j >= interval && a[j - interval] > temp; j -= interval){
				a[j] = a[j - interval];				
			}
			a[j] = temp;
		}
    }
}
