#include<iostream>
#define MAX_TERMS 101
using namespace std;
struct term{
	int row;
	int column;
	int value;
};
term A[MAX_TERMS],B[MAX_TERMS],C[MAX_TERMS];
void create(term a[MAX_TERMS],int &n);
void display_givenmatrix(term a[MAX_TERMS],int n);
void sparseMatrix(term a[MAX_TERMS],term b[MAX_TERMS],int &n,int &m);
void transpose(term a[MAX_TERMS],term b[MAX_TERMS]);
void display(term a[MAX_TERMS],int m);
int main(){
	int m,n,i,j;
	cout<<"\nEnter size matrix ixj: \n";cin>>i>>j; // Nhap kich thuoc cua ma tran
	n=i*j; // Tong so phan tu co trong ma tran
	cout<<"\nNumber Element = i * j = "<<n<<endl;
	create(A,n); // Tao ma tran
	cout<<"\nGiven Matrix is: "<<endl;
	display_givenmatrix(A,n); // In ra ma tran da tao
	sparseMatrix(A,B,n,m); // Chuyen qua ma tran thua
	cout<<"\nSparse Matrix is: "<<endl;
	display(B,m);
	transpose(B,C); 
	cout<<"\nTranspose is: "<<endl;
	display(C,m);
}
void create(term a[MAX_TERMS],int &n){ // Nhap cac phan tu 
	for(int i=0;i<n;i++){
		cout<<"\nElement "<<i+1;
		cout<<"\nEnter element "<<i+1<<" row: ";cin>>a[i].row; 
		cout<<"Enter element "<<i+1<<" column: ";cin>>a[i].column;
		cout<<"Enter element "<<i+1<<" value: ";cin>>a[i].value;
	}
}
void display_givenmatrix(term a[MAX_TERMS],int n){ // Xuat ra ma tran da cho
	cout<<a[0].value<<" ";
	for(int i=1;i<n;i++){
		if(a[i].row==a[i-1].row) cout<<a[i].value<<" ";
		else{ 
			cout<<endl;
			cout<<a[i].value<<" ";
		}
	}
}
void sparseMatrix(term a[MAX_TERMS],term b[MAX_TERMS],int &n,int &m){ // Chuyen qua ma tran thua
	int j=0;
	m=0;
	for(int p=0;p<n;p++) if(a[p].value!=0) m++;
	b[j].row=a[n-1].row+1,b[j].column=a[n-1].column+1,b[j].value=m; // hang dau tien cua ma tran la so cot khac 0, so hang khac 0 va so phan tu khac 0
	for(int i=0;i<n;i++){
		if(a[i].value!=0){ // Neu phan tu trong ma tran khac 0 thi
		 ++j; // Gan vao ma tran thua la chi so cot, hang va gia tri cua phan tu khac 0
		 b[j].row=a[i].row;
		 b[j].column=a[i].column;
		 b[j].value=a[i].value;
		}
	}
}
void transpose(term a[MAX_TERMS],term b[MAX_TERMS]){ // Ma tran chuyen doi
    int n= a[0].value; 
    b[0].row = a[0].column; // hang dau tien cua ma tran la so cot khac 0, so hang khac 0 va so phan tu khac 0
    b[0].column = a[0].row; 
    b[0].value = n;
    for(int i=1;i<=n;i++){
    	b[i].row=a[i].column;
    	b[i].column=a[i].row;
    	b[i].value=a[i].value;
	}
}
void display(term a[MAX_TERMS],int m){ // In ra ma tran
	cout<<"row "<<" column "<<" value "<<endl;
	for(int i=0;i<=m;i++)
	cout<<" "<<a[i].row<<"      "<<a[i].column<<"      "<<a[i].value<<endl;
}
