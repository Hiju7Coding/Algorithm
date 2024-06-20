#include<iostream>
#define maxm 100
#define maxn 100
using namespace std;
void Import_Matrix(int a[maxm][maxn],int &m,int &n);
void Sum_Matrix(int a[maxm][maxn],int b[maxm][maxn],int c[maxm][maxn],int &m,int &n);
void Export_sumMatrix(int a[maxm][maxn],int m,int n);
int main(){
	int a[maxm][maxn],b[maxm][maxn],c[maxm][maxn],n,m;
	cout<<"Enter row: ";cin>>m;
	cout<<"Enter column: ";cin>>n;
	cout<<"\nImport matrix a "<<endl;
	Import_Matrix(a,m,n);
	cout<<"\nImport matrix b "<<endl;
	Import_Matrix(b,m,n);
	Sum_Matrix(a,b,c,m,n);
	cout<<endl;
	cout<<"Matrix c: "<<endl;
	Export_sumMatrix(c,m,n);
}
void Import_Matrix(int a[maxm][maxn],int &m,int &n){
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
}
void Sum_Matrix(int a[maxm][maxn],int b[maxm][maxn],int c[maxm][maxn],int &m,int &n){
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	c[i][j]=a[i][j]+b[i][j];
}
void Export_sumMatrix(int a[maxm][maxn],int m,int n){
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
}
}