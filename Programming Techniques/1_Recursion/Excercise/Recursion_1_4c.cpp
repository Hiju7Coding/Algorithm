#include<iostream> 
using namespace std;
float Sn(int n);
int main(){ //  S5= 4.33333
	int n;
	cout<<"Enter n: ";cin>>n;
	float T=Sn(n);
	cout<<" "<<T;
}
float Sn(int n){
	int f1=1,f2=1,f3;
	float S=1.0/(1+f1)+2.0/(1+f2);
	for(int i=3;i<=n;i++){
	int f1=1,f2=1,f3;
		for(int k=3;k<=i;k++){
			f3=f2+f1;
			f1=f2;
			f2=f3;
		}
	S=S+i/(1.0+f3);
	}
	return S;
}
