#include<iostream>
#define maxn 100
using namespace std;
struct nv{
	char manv[6];
	char hoten[150];
	int ngays,thangs,nams;
	int luongcb;
	int luongt;
	int thuclanh;
};
void nhapthongtin(nv a[maxn],int &n){
	cout<<"Enter n: ";cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"\nNhap thong tin nhan vien thu "<<i<<endl;
		cin>>a[i].manv;fflush(stdin);
		gets(a[i].hoten);fflush(stdin);
		cin>>a[i].ngays>>a[i].thangs>>a[i].nams;fflush(stdin);
		cin>>a[i].luongcb>>a[i].luongt;fflush(stdin);
		a[i].thuclanh=a[i].luongcb+a[i].luongt;
	}
}
void swap(nv &a,nv &b){
	nv r=a;
	a=b;
	b=r;
}
void indsluonggiamdan(nv a[maxn],int n){
	for(int i=1;i<=n-1;i++)
	for(int j=i+1;j<=n;j++)
	if(a[i].thuclanh < a[j].thuclanh) swap(a[i].thuclanh,a[j].thuclanh);
}
void indsmanvtangdan(nv a[maxn],int n){
	for(int i=1;i<=n-1;i++)
	for(int j=i+1;j<=n;j++)
	if(a[i].manv < a[j].manv) swap(a[i].thuclanh,a[j].thuclanh);
}
void xuatthongtin(nv a[maxn],int n){
	cout<<"Ma nhan vien "<<"|"<<"          Ho ten          "<<"|"<<"   Ngay sinh   "<<"|"<<" Thuc lanh "<<endl;
	for(int i=1;i<=n;i++)
	cout<<"  "<<a[i].manv<<"           "<<a[i].hoten<<"           "<<a[i].ngays<<"/"<<a[i].thangs<<"/"<<a[i].nams<<"     "<<a[i].thuclanh<<endl;
	
}

int main(){
	nv a[maxn];
	int n;
	nhapthongtin(a,n);
	indsluonggiamdan(a,n);
	xuatthongtin(a,n);
	indsmanvtangdan(a,n);
	xuatthongtin(a,n);
}