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
int Count(int *a,int n,int m,int x){
	int count=0;
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	if(*(a+n*i+j)==x){
	cout<<"Locate a["<<i<<"]["<<j<<"]"<<endl;
	count++;
	}
}
}
    return count;
}
int main(){
	int *a,n,m,x;
	a=new int[m*n];
	cout<<"Enter n: ";cin>>n;
	cout<<"Enter m: ";cin>>m;
	Import(a,n,m);
	cout<<"Enter x: ";cin>>x;
	cout<<"-----------Array-----------"<<endl;
	cout<<"There are "<<Count(a,n,m,x)<<" value a[i][j] = x";
}
