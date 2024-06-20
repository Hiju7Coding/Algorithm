#include<iostream>
#include<math.h>
using namespace std;
int songuyento(int n){
	for(int i=2;i<=int(sqrt(n));i++)
	if(n%i==0) return 0;
	return n>2?1:0;
}
void Phantich(int n){
	while(n>0){
	for(int i= 2; i <= n; i++){
		if(songuyento(i) && n%i==0){
			cout<<i;
			n=n/i;
			i=2;
			if(n!=1) cout<<" * ";
		}
    }
    }
}
int main(){
	int n;
	cout<<"Nhap n: ";cin>>n;
	cout<<n<<" = ";
	Phantich(n);
}