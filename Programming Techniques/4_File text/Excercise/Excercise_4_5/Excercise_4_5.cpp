#include<iostream>
#define maxn 100
using namespace std;
void Import_table(int a[maxn][maxn],int &n){
	FILE *f=fopen("4_5.INP","rt");
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	fscanf(f,"%d",&a[i][j]);
	fclose(f);
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
int Median_number(int a[maxn][maxn],int n){
	int temp[maxn],Median_row[maxn];
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	temp[j]=a[i][j];
    }
	Quick_sort(temp,0,n-1);
	Median_row[i]=temp[n/2];
    }
    Quick_sort(Median_row,0,n-1);
    return Median_row[n/2];
}
int main(){
	int a[maxn][maxn],n;
	Import_table(a,n);
	FILE *f1=fopen("4_5.OUT","wt");
	fprintf(f1,"%d",Median_number(a,n));
	fclose(f1);
}