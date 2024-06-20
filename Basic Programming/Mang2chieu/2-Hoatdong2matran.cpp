/*
 1 2 3
 4 3 2
 5 3 7
 
 2 1 3
 3 2 1
 4 5 2
 
 */
#include<iostream>
#define maxn 100
using namespace std;
void Nhapmang(int a[maxn][maxn],int &n){
	cout<<"Enter n: ";cin>>n;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
}
void Xuatmang(int a[maxn][maxn],int n){
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
    cout<<endl;
	}
}
void tong(int a[maxn][maxn],int b[maxn][maxn],int n){
	int c[maxn][maxn];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	c[i][j]=a[i][j]+b[i][j];
	Xuatmang(c,n);
}
void tich(int a[maxn][maxn],int b[maxn][maxn],int n){
	int c[maxn][maxn],d=0;
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	for(int h=0;h<n;h++) d+=a[i][h]*b[h][j];
	    c[i][j]=d;
	    d=0;
    }
    }
	Xuatmang(c,n);
}
void matranc(int a[maxn][maxn],int b[maxn][maxn],int n){
	int c[maxn][maxn],d=INT_MIN;
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	for(int k=0;k<n;k++) if(b[i][k] > d) d=b[i][k];
	c[i][j]=a[i][j]*d;
    }
    }
	Xuatmang(c,n);
}
int main(){
	int a[maxn][maxn],b[maxn][maxn],n;
	Nhapmang(a,n);Xuatmang(a,n);
	Nhapmang(b,n);Xuatmang(b,n);
	cout<<"Tong hai ma tran: \n";tong(a,b,n);
	cout<<"Tich hai ma tran: \n";tich(a,b,n);
	cout<<"Ma tran c: \n";matranc(a,b,n);
}