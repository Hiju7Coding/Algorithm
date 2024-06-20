/*
  m=4 n=4
  1 2 5 7
  16 5 3 8
  7 3 3 4
  32 8 1 9
*/
#include<iostream>
#include<math.h>
#define maxm 100
#define maxn 100
using namespace std;
void Nhapmang(int a[maxm][maxn],int &m,int &n){
	cout<<"Enter m: ";cin>>m;
	cout<<"Enter n: ";cin>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
}
void Xuatmang(int a[maxm][maxn],int m,int n){
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
	cout<<endl;
	}
}
int Tongduongbien(int a[maxm][maxn],int m,int n){
	int d=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(j==0 || j==n-1 || i==0 ||i==n-1) d+=a[i][j];
	return d;
}
int Tongdcc(int a[maxm][maxn],int m,int n){
	int d=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(i==j) d+=a[i][j];
	return d;
}
int Tongdcp(int a[maxm][maxn],int m,int n){
	int d=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(i+j==m) d+=a[i][j];
	return d;
}
int Tongtgt(int a[maxm][maxn],int m,int n){
	int d=0;
	for(int i=0;i<m;i++)
	for(int j=i+1;j<n;j++)
	d+=a[i][j];
	return d;
}
int Tongtgd(int a[maxm][maxn],int m,int n){
	int d=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(j<i) d+=a[i][j];
	return d;
}
int songuyento(int n){
	for(int i=2;i<=int(sqrt(n));i++)
	if(n%i==0) return 0;
	return n>=2?1:0;
}
void Hinhvuong(int a[maxm][maxn],int m,int n){
	int p;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	if(songuyento(a[i][j])){
	   for(int h=i;h<m;h++)
	   for(int k=j;k<n;k++)
	   if(songuyento(a[h][k])) if(h==k) p=h;
	}
	}
	} 
	cout<<p<<" x "<<p;
}
int sum(int a[maxm][maxn],int m,int n){
	int d=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	d+=a[i][j];
	return d;
}
int soarmstrong(int n){
	int k=0,sum=0;
	for(int temp=n;temp>0;temp/=10) k+=1;
    for(int temp1=n;temp1>0;temp1/=10) sum+=pow(temp1%10,k);
    if(sum==n) return 1;
    return 0;
}
int demarms(int a[maxm][maxn],int m,int n){
	int d=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(soarmstrong(a[i][j])) d++;
	return d;
}
int gtln(int a[maxm][maxn],int m,int n){
	int d=a[0][0];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(a[i][j]>d) d=a[i][j];
	return d;
}
int gtnn(int a[maxm][maxn],int m,int n){
	int d=a[0][0];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(a[i][j]<d) d=a[i][j];
	return d;
}
int sntmax(int a[maxm][maxn],int m,int n){
	int d=a[0][0];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(a[i][j]>d && songuyento(a[i][j])) d=a[i][j];
	return d;
}
int sntmin(int a[maxm][maxn],int m,int n){
	int d=a[0][0];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(a[i][j]<d && songuyento(a[i][j])) d=a[i][j];
	return d;
}
void tongdong(int a[maxm][maxn],int m,int n){
	int d=0,p=0;
    for(int i=0;i<m;i++){
	for(int j=0;j<n;j++) d+=a[i][j];
	cout<<d<<" ";
	if(d>p) p=d;
	d=0;
    }
    cout<<"\nTong lon nhat: "<<p;
}
void tongcot(int a[maxm][maxn],int m,int n){
	int d=0,p=0;
    for(int i=0;i<m;i++){
	for(int j=0;j<n;j++) d+=a[j][i];
	cout<<d<<" ";
	if(d>p) p=d;
	d=0;
    }
    cout<<"\nTong nho nhat: "<<p;
}
void gtlndong(int a[maxm][maxn],int m,int n){
	int d=INT_MIN,p=INT_MAX;
    for(int i=0;i<m;i++){
	for(int j=0;j<n;j++) if(a[i][j]>d) d=a[i][j];
	cout<<d<<" ";
	if(d<p) p=d;
	d=INT_MIN;
    }
    cout<<"\nGia tri nho nhat trong cac gia tri lon nhat: "<<p;
}
void gtnncot(int a[maxm][maxn],int m,int n){
	int d=INT_MAX,p=INT_MIN;
    for(int i=0;i<m;i++){
	for(int j=0;j<n;j++) if(a[i][j]<d) d=a[i][j];
	cout<<d<<" ";
	if(d>p) p=d;
	d=INT_MAX;
    }
    cout<<"\nGia tri lon nhat trong cac gia tri nho nhat: "<<p;
}
void taomang(int a[maxm][maxn],int m,int n){
	int d=INT_MAX;
	int b[maxm][maxn];
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++) if(a[i][j]<d) d=a[i][j];
	for(int k=0;k<n;k++) b[i][k]=a[i][k]*d;
	d=INT_MAX;
	}
	Xuatmang(b,m,n);
}
int tongchuso(int n){
    int k=0;
    for(int temp=n;temp>0;temp/=10)
    k+=temp%10;
    return k;
}
void mangtongchuso(int a[maxm][maxn],int m,int n){
	int b[maxm][maxn];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	b[i][j]=tongchuso(a[i][j]);
	Xuatmang(b,m,n);
}
int songuyentogannhat(int n){
	int h=n,k=n;
	while(!songuyento(++h));
	while(!songuyento(--k) && --k>0);
	return h-n<n-k?h:k;
}
void sntgannhat(int a[maxm][maxn],int m,int n){
	int b[maxm][maxn];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	b[i][j]=songuyentogannhat(a[i][j]);
	Xuatmang(b,m,n);
}
void mangtangdandong(int a[maxm][maxn],int m,int n){
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    for(int k=j+1;k<n;k++)
    if(a[i][j]>a[i][k]) swap(a[i][j],a[i][k]);
    }
    Xuatmang(a,m,n);
}
void mangtangdancot(int a[maxm][maxn],int m,int n){
	for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    for(int k=j+1;k<m;k++)
    if(a[j][i]>a[k][i]) swap(a[j][i],a[k][i]);
    }
    Xuatmang(a,m,n);
}
int main(){
	int a[maxm][maxn],m,n;
	Nhapmang(a,m,n);
	int b[maxm][maxn];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	b[i][j]=a[i][j];
	cout<<"\nXuat mang: "<<endl;Xuatmang(a,m,n);cout<<endl;
	cout<<"Tong duong bien: "<<Tongduongbien(a,m,n);cout<<endl;
	cout<<"Tong duong cheo chinh: "<<Tongdcc(a,m,n);cout<<endl;
	cout<<"Tong duong cheo phu: "<<Tongdcp(a,m,n);cout<<endl;
	cout<<"Tong tam giac tren: "<<Tongtgt(a,m,n);cout<<endl;
	cout<<"Tong tam giac duoi: "<<Tongtgd(a,m,n);cout<<endl;
	cout<<"Hinh vuong lon nhat: ";Hinhvuong(a,m,n);cout<<endl;
	cout<<"Tong phan tu cua mang: "<<sum(a,m,n);cout<<endl;
	cout<<"So luong so armstrong: "<<demarms(a,m,n);cout<<endl;
	cout<<"Gia tri lon nhat mang: "<<gtln(a,m,n);cout<<endl;
	cout<<"Gia tri nho nhat mang: "<<gtnn(a,m,n);cout<<endl;
	cout<<"So nguyen to lon nhat: "<<sntmax(a,m,n);cout<<endl;
	cout<<"So nguyen to nho nhat: "<<sntmin(a,m,n);cout<<endl;
	cout<<"Tong cac so tren moi dong: ";tongdong(a,m,n);cout<<endl;
	cout<<"Tong cac so tren moi cot: ";tongcot(a,m,n);cout<<endl;
	cout<<"Gia tri lon nhat moi dong: ";gtlndong(a,m,n);cout<<endl;
	cout<<"Gia tri nho nhat moi cot: ";gtnncot(a,m,n);cout<<endl;
	cout<<"Mang moi: \n";taomang(a,m,n);cout<<endl;
	cout<<"Mang tong chu so: \n";mangtongchuso(a,m,n);cout<<endl;
	cout<<"Mang so nguyen to gan nhat: \n";sntgannhat(a,m,n);cout<<endl;
	cout<<"Mang tang dan theo dong: \n";mangtangdandong(b,m,n);cout<<endl;
	cout<<"Mang tang dan theo cot: \n";mangtangdancot(b,m,n);cout<<endl;
}