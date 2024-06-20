#include<iostream>
#include<math.h>
using namespace std;
void swap(int &a,int &b){
    int r=a;
    a=b;
    b=r;
}
void gtlnnnsx(int a,int b,int c,int d){
	if(a > b) swap(a,b);
	if(a > c) swap(a,c);
	if(a > d) swap(a,d);
	if(b > c) swap(b,c);
	if(b > d) swap(b,d);
	if(c > d) swap(c,d);
	cout<<"Tang dan: "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	cout<<"max: "<<d<<" min: "<<a<<endl;
}
void khacnhau(int a,int b,int c,int d){
	int count = 0;
	if(a != b) count++; 
	if(a != c) count++;
	if(a != d) count++;
	if(b != c) count++;
	if(b != d) count++;
	if(c != d) count++;
	if(count > 3 ) cout<<"co "<<count-2<<" gia tri khac nhau"<<endl;
	else if( count == 3) cout<<"co "<<count-1<<" gia tri khac nhau"<<endl;
	else cout<<"Khong co gia tri khac nhau"<<endl;
}
int tongchuso(int n){
    int k=0;
    for(int temp=n;temp>0;temp/=10)
    k+=temp%10;
    return k;
}
void sstongchuso(int a,int b,int c,int d){
    int sum= 0,e;
    if(sum < tongchuso(a)){
    	sum = tongchuso(a);
    	e=a;
	}
	if(sum < tongchuso(b)){
		sum = tongchuso(b);
		e=b;
	}
	if(sum < tongchuso(c)){
		sum = tongchuso(c);
		e=c;
	}
	if(sum < tongchuso(d)){
		sum = tongchuso(d);
		e=d;
	}
	cout<<"so "<<e<<" co tong chu so lon nhat, "<<sum<<endl;
}
void kcgannhat(int a,int b,int c,int d){
	int kc=abs(a-b),e=a,f=b;
	if(kc > abs(a-c)){
		kc= abs(a-c);
		e=a;
		f=c;
	}
	if(kc > abs(a-d)){
		kc= abs(a-d);
		e=a;
		f=d;
	}
	if(kc > abs(b-c)){
		kc= abs(b-c);
		e=b;
		f=c;
	}
	if(kc > abs(b-d)){
		kc= abs(b-d);
		e=b;
		f=d;
	}
	if(kc > abs(c-d)){
		kc= abs(c-d);
		e=c;
		f=d;
	}
	cout<<"Khoang cach gan nhat la: "<<kc<<" "<<e<<" "<<f<<endl;
}
int main(){
	int a,b,c,d;
	cout<<"Nhap a,b,c,d: ";cin>>a>>b>>c>>d;
	gtlnnnsx(a,b,c,d);
	khacnhau(a,b,c,d);
	sstongchuso(a,b,c,d);
	kcgannhat(a,b,c,d);
}