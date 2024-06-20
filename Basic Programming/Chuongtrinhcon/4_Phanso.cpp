#include<iostream>
using namespace std;
void phansolonnhat(int c,int d,int &p,int &q){
	if(p*d-q*c<0){
		p=c;
		q=d;
	} 
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
void tongphanso(int c,int d,int &p,int &q){
	int tu=p*d+q*c;
	int mau=q*d;
    p=tu/UCLN(tu,mau);
    q=mau/UCLN(tu,mau);
}
void hieuphanso(int c,int d,int &h,int &k){
	int tu=h*d-k*c;
	int mau=k*d;
	h=tu/UCLN(tu,mau);
	k=mau/UCLN(tu,mau);
}
void tichphanso(int c,int d,int &x,int &y){
	int tu=x*c;
	int mau=y*d;
	x=tu/UCLN(tu,mau);
	y=mau/UCLN(tu,mau);
}
void thuongphanso(int c,int d,int &s,int &z){
	int tu=s*d;
	int mau=z*c;
	s=tu/UCLN(tu,mau);
	z=mau/UCLN(tu,mau);
}
void nhapphanso(int a,int b,int c,int d,int n){
	int i=1;
	cout<<"Nhap phan so thu "<<i<<" ";cin>>a>>b;
	int p=a,h=a,o=a,x=a,s=a;
	int k=b,u=b,y=b,z=b,q=b;
	for(i=2;i<=n;i++){
	   cout<<"Nhap phan so thu "<<i<<" ";cin>>c>>d;
	   phansolonnhat(c,d,p,q);
	   tongphanso(c,d,h,k);
	   hieuphanso(c,d,o,u);
	   tichphanso(c,d,x,y);
	   thuongphanso(c,d,s,z);
	}
	cout<<endl;
	cout<<"Phan so lon nhat: "<<p<<"/"<<q<<endl;
	cout<<"Tong phan so: "<<h<<"/"<<k<<endl;
	cout<<"Hieu phan so: "<<o<<"/"<<u<<endl;
	cout<<"Tich phan so: "<<x<<"/"<<y<<endl;
	cout<<"Thuong phan so: "<<s<<"/"<<z<<endl;
}
int main(){
	int n,a,b,c,d;
	cout<<"Nhap so luong phan so: ";cin>>n;
	nhapphanso(a,b,c,d,n);
}
