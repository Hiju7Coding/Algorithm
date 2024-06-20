#include<iostream>
#include<math.h>
#define maxn 100
using namespace std;
void Nhapmang(int a[maxn],int &n){
	cout<<"Nhap so luong phan tu: ";cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
}
int chuso(int n){
	int k=0;
	for(int i=n;i>0;i/=10) k=k+i%10;
    return k;
}
void tongchuso(int a[maxn],int n){
	for(int i=0;i<n;i++)
	cout<<chuso(a[i])<<" ";
}
float trungbinhcong(int a[maxn],int n){
	float k=0;
	for(int i=0;i<n;i++) k+=a[i];
	return 1.0*k/n;
}
int songuyento(int n){
	for(int i=2;i<=int(sqrt(n));i++)
	if(n%i==0) return 0;
	return n>=2?1:0;
}
int demsnt(int a[maxn],int n){
	int d=0;
	for(int i=0;i<n;i++) if(songuyento(a[i])) d++;
	return d;
}
int sochinhphuong(int n){
	if(n == int(sqrt(n))*int(sqrt(n))) return 1;
	return 0;
}
int demscp(int a[maxn],int n){
	int d=0;
	for(int i=0;i<n;i++) if(sochinhphuong(a[i])) d++;
	return d;
}
int sohoanchinh(int n){
	int k=0;
	for(int i=1;i<=n/2;i++)
	if(n%i==0) k+=i;
	if(k==n) return 1;
	return 0;
}
int demshc(int a[maxn],int n){
	int d=0;
	for(int i=0;i<n;i++) if(sohoanchinh(a[i])) d++;
	return d;
}
int timgiatri(int a[maxn],int n,int k){
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]<a[j]) swap(a[i],a[j]);
	return a[k-1];
}
void sapxepmang(int a[maxn],int n){
	for(int j=0;j<n;j++){
	for(int i=0;i<n;i++){
		if(songuyento(a[i])){
			int k=a[i];
			for(int j=i;j<n;j++) a[j]=a[j+1];
			a[n-1]=k;
		}
    }
    }
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int songuyentodoixung(int n){
	int k=n,h=n;
	while(!songuyento(--h));
	while(!songuyento(++k));
	if(songuyento((k+h)/2) && ((h+k)/2 == n)) return 1;
	return 0;
}
int demsntdoixung(int a[maxn],int n){
	int d=0;
	for(int i=0;i<n;i++) if(songuyentodoixung(a[i])) d++;
	return d;
}
void biendoint(int &n){
	int h=n;
	while(!songuyento(h)){
		h++;
		if(songuyento(h)) n=h;
	}
}
void biendoi(int a[maxn],int n){
    for(int i=0;i<n;i++) if(!songuyento(a[i])) biendoint(a[i]);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int giatrikhacnhau(int a[maxn],int n){
	int c[maxn],d=0;
	for(int i=0;i<n;i++) c[i]=a[i];
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if(c[j]>c[i]) swap(c[i],c[j]);
	for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
    	if(c[i]==c[j]){
    		d++;
    		i=j;
		}
	}
	}
	return n-d;
}
void tansuat(int a[maxn],int n){
	int c[maxn],d=1,p=0,m,t;
	for(int i=0;i<n;i++) c[i]=a[i];
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if(c[j]>c[i]) swap(c[i],c[j]);
	for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
    	if(c[i]==c[j]){
    		d++;
    		i=j;
    		m=c[i];
		}
	}
	if(d>p){
		p=d;
		t=m;
	}
	cout<<c[i]<<" "<<d<<" | ";
	d=1;
	}
	cout<<"\nGia tri "<<t<<" lap lai nhieu nhat: "<<p<<" lan";
}
void CreateL(int a[maxn],int l[maxn],int p[maxn],int n){
	int max;
	for(int i=1;i<=n;i++){
		if(i==1){
			l[i]=1;
			p[i]=0;
			max=1;
		}
		else{
			if(a[i]>a[i-1]){
				for(int j=1;j<i;j++){
					if(a[j]<a[i] && l[j]>=l[i-1]){
						if(j<i-1 && l[j]==max){
						l[i]=l[j]+1;
						p[i]=j;
						if(l[i]>max) max=l[i];
						j=i;
					    }
					    if(j==i-1){
					    l[i]=l[j]+1;
					    p[i]=j;
					    if(l[i]>max) max=l[i];
					    j=i;
						}
					}
				}
			}
			else{
				for(int j=i-1;j>=1;j--){
					if(a[j]<a[i]){
						l[i]=l[j]+1;
						p[i]=j;
						if(l[i]>max) max=l[i];
						j=0;
					}
			    }
		    }
        }
    }
    int temp=max,kq[maxn],t;
    for(int i=n;i>=1;i--){
    	if(l[i]==temp){
    	kq[temp]=a[i];
    	temp--;
		i=p[i]+1;
		}
	}
    for(int i=1;i<=max;i++) cout<<kq[i]<<" ";
}
void mangcontangdan(int a[maxn],int n){
	int b[maxn],l[maxn],p[maxn];
	for(int i=1;i<=n;i++) b[i]=a[i-1];
    CreateL(b,l,p,n);
}
int timcapso(int a[maxn],int n,int m){
	int d=0;
	for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(a[i]+a[j]==m) d++;
	}
	}
	return d;
}
int timcapso2(int a[maxn],int n){
	int d,p=0;
	for(int i=n-1;i>0;i--){
	for(int j=i-1;j>=0;j--){
	   d=a[i]-a[j];
	   if(d>p) p=d;
	}
	}
	return p;
}
void tich3so(int a[maxn],int n){
	int c[maxn],d=1;
	for(int i=0;i<n;i++) c[i]=a[i];
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if(c[j]>c[i]) swap(c[i],c[j]);
	cout<<c[0]<<" * "<<c[1]<<" * "<<c[2]<<" = "<<c[0]*c[1]*c[2];
}
int tong(int a[maxn],int n){
	int d=0;
	for(int i=0;i<n;i++) d+=a[i];
    return d;
}
int max(int a[maxn],int n){
	int d=a[0];
	for(int i=1;i<n;i++) if(a[i]>d) d=a[i];
    return d;
}
int min(int a[maxn],int n){
	int d=a[0];
	for(int i=1;i<n;i++) if(a[i]<d) d=a[i];
	return d;
}
int main(){
	int a[maxn],b[maxn],n,k,m;
	Nhapmang(a,n);
	for(int i=0;i<n;i++) b[i]=a[i];
	cout<<"Tong chu so cua tung phan tu: ";tongchuso(a,n);
	cout<<endl;
	cout<<"Trung binh cong cac so cua mang: "<<trungbinhcong(a,n);
	cout<<endl;
	cout<<"So luong so nguyen to co trong mang: "<<demsnt(a,n);
    cout<<endl;
    cout<<"So luong so chinh phuong co trong mang: "<<demscp(a,n);
    cout<<endl;
    cout<<"So luong so hoan chinh co trong mang: "<<demshc(a,n);
    cout<<endl;
    cout<<"So luong so nguyen to doi xung co trong mang: "<<demsntdoixung(a,n);
    cout<<endl;
	cout<<"Nhap k: ";cin>>k;
    cout<<"Gia tri lon thu "<<k<<" trong mang: "<<timgiatri(b,n,k);
    cout<<endl;
    cout<<"Mang da sap xep: ";sapxepmang(b,n);
    cout<<endl;
    cout<<"Mang sau khi duoc chinh sua: ";biendoi(b,n);
    cout<<endl; 
    cout<<"So gia tri khac nhau: "<<giatrikhacnhau(a,n);
    cout<<endl; 
    cout<<"Mang con tang dan co nhieu phan tu nhat: ";mangcontangdan(a,n);
    cout<<endl; 
    cout<<"Tan suat xuat hien cua cac gia tri: ";tansuat(a,n);
	cout<<endl;
	cout<<"Nhap m: ";cin>>m; 
	cout<<"So luong cap so thoa man la: "<<timcapso(a,n,m);
	cout<<endl;
	cout<<"Gia tri lon nhat a[j]-a[i] la: "<<timcapso2(a,n);
	cout<<endl;
	cout<<"Tich 3 gia tri lon nhat: ";tich3so(a,n);
	cout<<endl;
	cout<<"Tong tat ca cac phan tu cua mang: "<<tong(a,n);cout<<endl;
	cout<<"Gia tri lon nhat mang: "<<max(a,n);cout<<endl;
	cout<<"Gia tri nho nhat mang: "<<min(a,n);cout<<endl;
}