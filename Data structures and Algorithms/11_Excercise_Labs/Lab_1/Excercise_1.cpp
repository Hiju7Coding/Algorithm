#include<iostream>
#define maxn 100
using namespace std;
void Import_1_dimension_array(int a[maxn],int &n);
void Export_1_dimension_array(int a[maxn],int n);
int Sum(int a[maxn],int n);
int main(){
	int a[maxn],n;
	cout<<"Enter n: ";cin>>n;
	cout<<endl;
	Import_1_dimension_array(a,n);
	cout<<endl;
	Export_1_dimension_array(a,n);
	cout<<endl;
	cout<<"\nTotal= "<<Sum(a,n);
}
void Import_1_dimension_array(int a[maxn],int &n){
	for(int i=0;i<n;i++){
	cout<<"a["<<i<<"]= ";cin>>a[i];
	}
}
void Export_1_dimension_array(int a[maxn],int n){
	for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
	}
}
int Sum(int a[maxn],int n){
	int s=0;
	for(int i=0;i<n;i++) s+=a[i];
	return s;
}