#include<iostream>
using namespace std;
void Import_1_dimension_array(int *&A,int &n){
	A= new int[n];
	for(int i=1;i<=n;i++){
	cout<<"Enter A["<<i<<"]: ";cin>>*(A+i);
    }
}
void Insert(int *A,int &n,int k,int x){
	n++;
	for(int i=1;i<=n;i++){
	if(i==k){
	for(int j=n;j>k;j--) *(A+j)=*(A+(j-1));
    *(A+k)=x;
    }
}
}
void Export_1_dimension_array(int *A,int n){
	for(int i=1;i<=n;i++) cout<<"A["<<i<<"]: "<<*(A+i)<<endl;
}
int main(){
	int *A,n,x,k;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimension_array(A,n);
	cout<<"Enter location to insert: ";cin>>k;
	cout<<"Enter value: ";cin>>x;
	Insert(A,n,k,x);
	Export_1_dimension_array(A,n);
}
