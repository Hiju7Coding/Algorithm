#include<iostream>
using namespace std;
void Import(int *&p,int &n){
	for(int i=0;i<n;i++){
		cout<<"Enter a["<<i<<"]: ";cin>>*(p+i);
	}
}
void Export(int *p,int n){
	for(int i=0;i<n;i++){
		cout<<"\na["<<i<<"]: "<<*(p+i);
	}
}
int main(){
	int *p,n;
	p=new int [100];
	cout<<"Enter n: ";cin>>n;
	Import(p,n);
	Export(p,n);
}
