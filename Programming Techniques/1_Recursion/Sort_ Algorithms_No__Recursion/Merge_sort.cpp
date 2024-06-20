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
void Merge_sort(int a[], int l, int r);
int main(){
	int a[maxn],n,x;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimensional_array(a,n);
	Merge_sort(a,0,n-1);
	cout<<"\nResult: \n";
	Export_1_dimensional_array(a,n);
}
void Merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1+ j];
    i = 0;
    j = 0; 
    k = l; 
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void Merge_sort(int a[], int l, int r){
    if (l < r){
        int m = l+(r-l)/2;
        Merge_sort(a, l, m);
        Merge_sort(a, m+1, r);
        Merge(a, l, m, r);
    }
}
