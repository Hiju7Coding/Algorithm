#include<iostream>
#define maxn 10
using namespace std;
void Enter_polynomial(int a[maxn],int &n,int m);
void display_polynomial(int a[maxn],int n);
void Sum_polynomial(int a[maxn],int b[maxn],int c[maxn],int &n);
int main(){
	int A[maxn],B[maxn],C[maxn],n,m,p;
	cout<<"Enter the number of mononomials of a polynomial: ";cin>>n; // Nhap so luong don thuc co trong da thuc
	cout<<"\nEnter the number of mononomials of the polynomial A: ";cin>>m; // Nhap so luong don thuc cua da thuc A
	Enter_polynomial(A,n,m); // Nhap da thuc A
	cout<<"\n\nPolynomial A: \n";
	display_polynomial(A,n); // In ra da thuc A
	cout<<"\n\nEnter the number of mononomials of the polynomial B: ";cin>>p; // Nhap so luong don thuc cua da thuc B
	cout<<endl;
	Enter_polynomial(B,n,p);  // Nhap da thuc B
	cout<<"\n\nPolynomial B: \n";
	display_polynomial(B,n); // In ra da thuc B
	Sum_polynomial(A,B,C,n); // Tong hai da thuc 
	cout<<"\n\nPolynomial C: \n";
	display_polynomial(C,n); // Xuat ra tong da thuc
}
void Enter_polynomial(int a[maxn],int &n,int m){
	int k,q;
	for(int j=0;j<m;j++){
	cout<<"\nEnter the exponent(<="<<n-1<<"):";cin>>k; // Nhap so mu sao cho nho hon so luong da thuc toi da
	for(int i=0;i<n;i++){
		if(i==k){
		cout<<"\nEnter coefficient: ";cin>>q; // Nhap he so
		a[i]=q;
	    }
	    else{
	    if(j==0) a[i]=0;
		if(a[i]==0 && j>0 ) a[i]=0;
	    }
	}
    }
}
void Sum_polynomial(int a[maxn],int b[maxn],int c[maxn],int &n){
	for(int i=0;i<n;i++) c[i]=a[i]+b[i];
	
}
void display_polynomial(int a[maxn],int n){
	for(int i=n-1;i>=0;i--){
		if(a[i]!=0){
			if(i>1) cout<<a[i]<<"X^"<<i;
			if(i==1) cout<<a[i]<<"X ";
			if(i==0) cout<<a[i];
			if(a[i-1]!=0 && i!=0) cout<<" + ";
		}
		else{
			if(a[i-1]!=0 && i!=0) cout<<" + ";
		}
	}
}