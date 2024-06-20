#include<iostream>
#define maxn 100
using namespace std;
struct ps{
	int tu;
	int mau;
};
void nhapmang(ps a[maxn],int n){
	for(int i=0;i<n;i++) cin>>a[i].tu>>a[i].mau;
}
int UCLN(int a,int b){
	int r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}
void phansolonnhatmang(ps a[maxn],int n){
	int p=a[0].tu,q=a[0].mau;
	for(int i=1;i<n;i++){
    if(p*a[i].mau-q*a[i].tu < 0 ){
    	p=a[i].tu;
    	q=a[i].mau;
	}	
	}
	p=p/UCLN(p,q);
	q=q/UCLN(p,q);
	cout<<p<<"/"<<q;
}
void tongphanso(ps a[maxn],int n){
	int p=a[0].tu,q=a[0].mau;
	for(int i=1;i<n;i++){
       	p=p*a[i].mau+q*a[i].tu;
       	q=q*a[i].mau;
	}
	p=p/UCLN(p,q);
	q=q/UCLN(p,q);
	cout<<p<<"/"<<q;
}
void sapxep(ps a[maxn],int n){
	for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(a[i].tu*a[j].mau-a[i].mau*a[j].tu >= 0){
			swap(a[i].tu,a[j].tu);
			swap(a[i].mau,a[j].mau);
		}
	}
	}
	for(int i=0;i<n;i++) cout<<a[i].tu<<"/"<<a[i].mau<<" ";
}
int main(){
	ps a[maxn];
	int n;
	cout<<"Enter n: ";cin>>n;
	nhapmang(a,n);
	cout<<"Phan so lon nhat mang: ";phansolonnhatmang(a,n);cout<<endl;
	cout<<"Tong cac phan so: ";tongphanso(a,n);cout<<endl;
	cout<<"Sap xep phan so tang dan: ";sapxep(a,n);cout<<endl;
}