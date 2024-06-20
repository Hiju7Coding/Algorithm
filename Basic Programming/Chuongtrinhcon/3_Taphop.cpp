#include<iostream>
#include<math.h>
#define maxn 50
using namespace std;
void Giao(int A[maxn],int B[maxn],int C[maxn],int n,int m,int &p){
    p=-1;
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	if(A[i] == B[j]){
		p=p+1;
		C[p]=A[i];
	}
    }
    }
    cout<<"Giao A B: {";
    for(int i=0;i<p+1;i++){	
	if(i>=1) cout<<","<<C[i];
	else cout<<C[i];
    }
    cout<<"}"<<endl;
}
void Hop(int A[maxn],int B[maxn],int C[maxn],int D[maxn],int n,int m,int p,int &q){
	p=p+1;
	q=m+n-p;
	int E[maxn];
	for(int i=0;i<m;i++) E[i]=B[i];
	for(int i=0;i<p;i++){
	for(int j=0;j<m;j++){
		if(C[i]==E[j]){
		    for(int k=j;k<m;k++) E[k]=E[k+1];
		    E[m-1]='\0';
		}
	}
	}
	for(int i=0;i<n;i++) D[i]=A[i];
	for(int i=n;i<q;i++) D[i]=E[i-n];
	cout<<"Hop A B: {";
    for(int i=0;i<q;i++){	
	if(i>=1) cout<<","<<D[i];
	else cout<<D[i];
    }
    cout<<"}"<<endl;
}
void Hieu(int A[maxn],int B[maxn],int C[maxn],int n,int m,int p){
	int E[maxn],q;
	q=n-p-1;
	for(int i=0;i<n;i++) E[i]=A[i];
	for(int i=0;i<p+1;i++){
	for(int j=0;j<n;j++){
		if(C[i]==E[j]){
			for(int k=j;k<n;k++) E[k]=E[k+1];
			E[m-i+1]='\0';
		}
	}
	}
	cout<<"A-B: {";
    for(int i=0;i<q;i++){	
	if(i>=1) cout<<","<<E[i];
	else cout<<E[i];
    }
    cout<<"}"<<endl;
	
}
void Tong(int C[maxn],int D[maxn],int p,int q){
	int E[maxn],e;
    e=q-p-1;
    for(int i=0;i<q;i++) E[i]=D[i];
    for(int i=0;i<p+1;i++){
    for(int j=0;j<q;j++){
    	if(C[i]==D[j]){
    		for(int k=j;k<q;k++) E[k]=E[k+1];
    		E[q-i+1]='\0';
		}
	}
	}
	cout<<"A+B: {";
    for(int i=0;i<e;i++){	
	if(i>=1) cout<<","<<E[i];
	else cout<<E[i];
    }
    cout<<"}"<<endl;
}
int main(){
	int A[maxn],B[maxn],C[maxn],D[maxn],n,m,p,q;
	cout<<"Nhap so phan tu cua A: ";cin>>n;
	for(int i=0;i<n;i++) cin>>A[i];
	cout<<"Nhap so phan tu cua B: ";cin>>m;
	for(int i=0;i<m;i++) cin>>B[i];
	cout<<endl;
	Giao(A,B,C,n,m,p);
	Hop(A,B,C,D,n,m,p,q);
	Hieu(A,B,C,n,m,p);
	Tong(C,D,p,q);
}