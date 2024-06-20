#include<iostream>
#define maxm 100
#define maxn 100
using namespace std;
struct ps{
	int  tu;
	int mau;
};
void nhapmang(ps a[maxm][maxn],int &m,int &n){
	cout<<"Enter m: ";cin>>m;
	cout<<"Enter n: ";cin>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j].tu>>a[i][j].mau;
}
void xuatmang(ps a[maxm][maxn],int m,int n){
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++) cout<<a[i][j].tu<<"/"<<a[i][j].mau<<" ";
	cout<<endl;
	}
}
void vitri(ps a[maxm][maxn],int m,int n){
	int p,q;
	int h=a[0][0].tu;
	int k=a[0][0].mau;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		if(h*a[i][j].mau - k*a[i][j].tu < 0){
			h=a[i][j].tu;
			k=a[i][j].mau;
			p=i;
			q=j;
		}
	}
	}
	cout<<"Vi tri co phan so co gia tri lon nhat: "<<p+1<<" "<<q+1<<endl;
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
int toigian(ps a){
	int p=a.tu;
	int q=a.mau;
	p=p/UCLN(a.tu,a.mau);
	q=q/UCLN(a.tu,a.mau);
	if(p == a.tu && q == a.mau) return 1;
	else return 0;
}
void dempstg(ps a[maxm][maxn],int m,int n){
	int d=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(toigian(a[i][j])) d++;
	cout<<"So luong phan so toi gian co trong mang: "<<d;
}
void sapxep(ps a[maxm][maxn],int m,int n){
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	for(int k=j+1;k<n;k++){
		if(a[i][j].tu*a[i][k].mau - a[i][k].tu*a[i][j].mau > 0){
			swap(a[i][j].tu,a[i][k].tu);
			swap(a[i][j].mau,a[i][k].mau);
		}
	}
	}
	}
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	for(int k=j+1;k<m;k++){
		if(a[j][i].tu*a[k][i].mau - a[k][i].tu*a[j][i].mau > 0){
			swap(a[j][i].tu,a[k][i].tu);
			swap(a[j][i].mau,a[k][i].mau);
		}
	}
	}
	}
}
int main(){
	ps a[maxm][maxn];
	int m,n;
	nhapmang(a,m,n);
	xuatmang(a,m,n);
	vitri(a,m,n);
	dempstg(a,m,n);cout<<endl;
	sapxep(a,m,n);
	xuatmang(a,m,n);
}