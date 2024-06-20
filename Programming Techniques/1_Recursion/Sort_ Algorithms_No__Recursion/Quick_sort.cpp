#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimensional_array(int a[],int &n){
    for(int i= 0;i<n;i++) cin>>a[i];
}
void Export_1_dimensional_array(int a[],int n){
    for(int i= 0;i<n;i++){
    cout<<" a["<<i<<"] : ";
	cout<<a[i]<<endl;
}
}
void Quick_sort(int array[], int low, int high);
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
int partition(int array[], int low, int high){
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot){
      i++;
      Exchange(array[i],array[j]);
    }
  }
  Exchange(array[i + 1],array[high]);
  return (i + 1);
}
void Quick_sort(int array[], int low, int high){
  if (low < high) {
    int pi = partition(array, low, high);
    Quick_sort(array, low, pi - 1);
    Quick_sort(array, pi + 1, high);
  }
}
