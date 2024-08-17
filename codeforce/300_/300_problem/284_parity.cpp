#include<iostream>
using namespace std;
int main(){
    int b,p,a,n;
	cin>>b>>p;
	for(int i=0;i<p;i++){
		cin>>a;n=(n*b+a);
	}
	cout<<(n%2==0?"even\n":"odd\n");
}
//1110A