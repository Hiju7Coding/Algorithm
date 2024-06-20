#include<iostream>
#include<math.h>
using namespace std;
int sochanle(int n){
	if(n%2==0) return 1;
	return 0;
}
int soamduong(int n){
	if(n>0) return 1;
	return 0;
}
int songuyento(int n){
	for(int i=2;i<=int(sqrt(n));i++)
	if(n%i==0) return 0;
	return n>=2?1:0;
}
int sochinhphuong(int n){
	if(n == int(sqrt(n))*int(sqrt(n))) return 1;
	return 0;
}
int sohoanchinh(int n){
	int k=0;
	for(int i=1;i<=n/2;i++)
	if(n%i==0) k+=i;
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
int tongchuso(int n){
    int k=0;
    for(int temp=n;temp>0;temp/=10)
    k+=temp%10;
    return k;
}
int daonguocso(int n){
	int k=0;
	for(int temp=n;temp>0;temp/=10)
	k=10*k+temp%10;
	return k;
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
int songuyentodoixung(int n){
	int k=n,h=n;
	while(!songuyento(--h));
	while(!songuyento(++k));
	if(songuyento(n) && ((h+k)/2 == n )) return 1;
	return 0;
}
int main(){
	int n,x;
	cout<<"Enter n: ";cin>>n;
	cout<<"Choose your case: ";cin>>x;
	switch(x){
		case 1:{
			cout<<sochanle(n);
			break;
		}
		case 2:{
			cout<<soamduong(n);
			break;
		}
		case 3:{
			cout<<songuyento(n);
			break;
		}
		case 4:{
			cout<<sochinhphuong(n);
			break;
		}
		case 5:{
			cout<<sohoanchinh(n);
			break;
		}
		case 6:{
			cout<<socanxung(n);
			break;
		}
		case 7:{
			cout<<tongchuso(n);
			break;
		}
		case 8:{
			cout<<daonguocso(n);
			break;
		}
		case 9:{
			cout<<soarmstrong(n);
			break;
		}
		case 10:{
			cout<<songuyentomersenne(n);
			break;
		}
		case 11:{
			cout<<songuyentodoixung(n);
			break;
		}
	}
}