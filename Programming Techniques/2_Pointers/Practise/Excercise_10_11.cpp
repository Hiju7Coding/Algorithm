#include<iostream>
using namespace std;
void Import(int *&a,int &n,int &m){
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	cout<<"Enter a["<<i<<"]["<<j<<"]: ";
	cin>>*(a+n*i+j);
	}
}
}
void Export(int *a,int n,int m){
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++)
	cout<<*(a+n*i+j)<<" ";
	cout<<endl;
}
     
}
int main(){
	int *a,n,m;
	a=new int[m*n];
	cout<<"Enter n: ";cin>>n;
	cout<<"Enter m: ";cin>>m;
	Import(a,n,m);
	cout<<"-----------Array-----------"<<endl;
	Export(a,n,m);
}
