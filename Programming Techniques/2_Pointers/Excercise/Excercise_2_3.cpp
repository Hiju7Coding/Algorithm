#include<iostream>
#include<math.h>
using namespace std;
void Import_1_dimension_array(int *&A,int &n){
	A= new int[n];
    for(int i=1;i<=n;i++){
    cout<<"Enter A["<<i<<"]: ";cin>>*(A+i);
}
}
int Prime_number(int n){
	int k=sqrt(n);
	for(int i=2;i<=k;i++)
	if(n%k==0) return 0;
	return 1;
}
void Delete(int *A,int &n,int k){
	for(int i=1;i<=n;i++) if(i==k) for(int j=k;j<n;j++) *(A+j)=*(A+(j+1));
	n--;
}
void Remove_Primes(int *A,int &n){
	for(int i=1;i<=n;i++)
	if(Prime_number(*(A+i))) Delete(A,n,i);
}
void Export_1_dimension_array(int *A,int n){
	for(int i=1;i<=n;i++) cout<<"A["<<i<<"]: "<<*(A+i)<<endl;
}
int main(){
	int *A,n;
	cout<<"Enter n: ";cin>>n;
	Import_1_dimension_array(A,n);
	Remove_Primes(A,n);
	Export_1_dimension_array(A,n);
}
