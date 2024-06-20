#include<iostream>
#include<math.h>
using namespace std;
int sochinhphuong(int n){
	if(n == int(sqrt(n))*int(sqrt(n))) return 1;
	return 0;
}
int sohoanchinh(int n){
	int k=0;
	for(int i=1;i<=n/2;i++) if(n%i==0) k+=i;
	if(k==n) return 1;
	return 0;
}
int socanxung(int n){
	int k=0;
	for(int temp=n;temp>0;temp/=10)
	k=10*k+temp%10;
	if(k==n) return 1;
	return 0;
}
int songuyento(int n){
	for(int i=2;i<=int(sqrt(n));i++)
	if(n%i==0) return 0;
	return n>2?1:0;
}
int daonguocso(int n){
	int k=0;
	for(int temp=n;temp>0;temp/=10)
	k=10*k+temp%10;
	if(k==n) return 1;
	return 0;
}
int songuyentodoixung(int n){
	int k=n,h=n;
	while(!songuyento(--h));
	while(!songuyento(++k));
	if(songuyento(n) && ((h+k)/2==n)) return 1;
	return 0;
}
int soarmstrong(int n){
	int k=0,sum=0;
	for(int temp=n;temp>0;temp/=10) k+=1;
    for(int temp1=n;temp1>0;temp1/=10) sum+=pow(temp1%10,k);
    if(sum==n) return 1;
    return 0;
}
int songuyentomersenne(int n){
	float k=log(n+1)/log(2);
	int p=k;
	if(songuyento(n) && p==k ) return 1;
	return 0;
}
int main(){
	int n;
	cout<<"Nhap n: ";cin>>n;
	cout<<"So chinh phuong nho hon hoac bang n: ";
	for(int i=1;i<=n;i++) if(sochinhphuong(i)) cout<<i<<" ";
	cout<<endl;
	cout<<"So hoan chinh nho hon hoac bang n: ";
	for(int i=1;i<=n;i++) if(sohoanchinh(i)) cout<<i<<" ";
	cout<<endl;
	cout<<"So can xung nho hon hoac bang hon n: ";
	for(int i=1;i<=n;i++) if(socanxung(i)) cout<<i<<" ";
	cout<<endl;
	cout<<"So nguyen to nho hon hoac bang n: ";
	for(int i=1;i<=n;i++) if(songuyento(i)) cout<<i<<" ";
	cout<<endl;
	cout<<"So nguyen to dao nguoc nho hon hoac bang n: ";
	for(int i=1;i<=n;i++) if(songuyento(i) && daonguocso(i)) cout<<i<<" ";
	cout<<endl;
	cout<<"So nguyen to doi xung nho hon hoac bang n: ";
	for(int i=1;i<=n;i++) if(songuyentodoixung(i)) cout<<i<<" ";
	cout<<endl;
	cout<<"So armstrong nho hon hoac bang n: ";
	for(int i=1;i<=n;i++) if(soarmstrong(i)) cout<<i<<" ";
	cout<<endl;
	cout<<"So nguyen to Mersenne nho hon hoac bang n: ";
	for(int i=1;i<=n;i++) if(songuyentomersenne(i)) cout<<i<<" ";
}