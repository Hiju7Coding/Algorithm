#include<iostream>
#define maxn 100
using namespace std;
void Taomaphuong(int a[maxn][maxn],int n){
	int i=n,j=(n/2)+1,k=1;
	a[i][j]=k;
	for(k=k+1;k<=n*n;k++){
		j++;i++;
		if(j>n && i<=n){
			j=1;
			a[i][j]=k;
		}
		else if(i>n && j<=n){
			i=1;
			a[i][j]=k;
		}
		else if(i>n && j>n){
			i=i-2;
			j=j-1;
			a[i][j]=k;
		}
		else if(a[i][j]!=0){
			i=i-2;
			j=j-1;
			a[i][j]=k;
		}
		else a[i][j]=k;
	}	
}
void Xuatmang(int a[maxn][maxn],int n){
	for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
	cout<<endl;
	}
}
int main(){
	int a[maxn][maxn],n;
	cout<<"Nhap n: ";cin>>n;
	Taomaphuong(a,n);cout<<endl;
	Xuatmang(a,n);
}