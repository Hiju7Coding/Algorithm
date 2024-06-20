#include<iostream>
using namespace std;
void Import_1_dimension_array(int *&A,int &n){
	A=new int [n];
	for(int i= 1;i<=n;i++){
	cout<<"Enter A["<<i<<"]: ";cin>>*(A+i);
    }
}
void Delete(int *A,int &n,int k){
	for(int i= 1;i<=n;i++) if(i==k) for(int j=k;j<n;j++) *(A+j)=*(A+(j+1));
	n--;
}
void Export_1_dimension_array(int *A,int n){
	for(int i= 1;i<=n;i++) cout<<"A["<<i<<"]: "<<*(A+i)<<endl;
}
int main(){
	int *A,n,k;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimension_array(A,n);
	cout<<"Enter location to delete: ";cin>>k;
	Delete(A,n,k);
	Export_1_dimension_array(A,n);
}
