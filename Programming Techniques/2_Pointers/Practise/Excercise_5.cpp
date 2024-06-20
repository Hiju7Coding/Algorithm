#include<iostream>
using namespace std;
void Import(int *&a,int &n){
	for(int i=0;i<n;i++){
	cout<<"Enter a["<<i<<"]: ";cin>>*(a+i);
	}
}
void Copy_array(int *a,int n,int *&desk){
	for(int i= 0;i<n;i++){
	*(desk+i)=*(a+i);		
	}
}
void Export(int *a,int n){
	for(int i= 0;i<n;i++) cout<<*(a+i)<<" ";
}
int main(){
	int *a,*desk,n;
	cout<<"Enter n: ";cin>>n;
	a=new int[n];
	desk=new int[n];
	Import(a,n);
	Copy_array(a,n,desk);
	Export(desk,n);
}
