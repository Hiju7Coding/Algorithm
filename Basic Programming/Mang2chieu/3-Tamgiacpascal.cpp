#include<iostream>
#define maxn 100
using namespace std;
void taotamgiac(int a[maxn][maxn],int n){
	a[0][0]=1;
	for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
       if(j==0 || j==i-1) a[i][j]=a[0][0];
       else a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    }
}
void xuatmang(int a[maxn][maxn],int n){
	for(int i=1;i<n;i++){
	for(int j=0;j<i;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
    }
}
int main(){
	int a[maxn][maxn],n;
	cout<<"Nhap chieu cao tam giac pascal: ";cin>>n;
	taotamgiac(a,n+1);
	xuatmang(a,n+1);
}