#include<iostream>
#include<math.h>
#define maxn 100
using namespace std;
int prime(int n){
	if(n<2) return 0;
	int k=sqrt(n);
	for(int i=2;i<=k;i++)
	if(n%i==0) return 0;
	return 1;
}
void Bubble_sort(int a[],int &n);
int main(){
	int n,count=0,a[maxn];
	FILE *f=fopen("4_1.INP","rt");
	FILE *f1=fopen("4_1.OUT","wt");
	fscanf(f," %d ", &n);
	for(int i=0;i<n;i++){
	fscanf(f," %d ", &a[i]);
	if(prime(a[i])) count++;
    }
	Bubble_sort(a,n);
	fprintf(f1,"%d \n",count);
	for(int i=0;i<n;i++) fprintf(f1,"%d ",a[i]);
	fclose(f);
	fclose(f1);
}
void Exchange(int &x,int &y){
	int r=y;
	y=x;
	x=r;
}
void Bubble_sort(int a[], int &n){	
	for(int i=0;i<n-1;i++)
	for(int j=n-1;j>i;j--)
	if(a[j] < a[j-1]) Exchange(a[j],a[j-1]);
}