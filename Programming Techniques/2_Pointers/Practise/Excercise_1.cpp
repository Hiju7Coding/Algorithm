#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x,y;
	cout<<"Enter x: ";cin>>x;
	cout<<"Enter y: ";cin>>y;
	swap(x,y);
	cout<<"x: "<<x<<" y: "<<y;
}
