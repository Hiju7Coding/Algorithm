#include<iostream>
using namespace std;
void findmax(int *a,int n){
	int max=0,*p;
	for(int i=0;i<n;i++)
	if(*(a+i)>max){
	max=*(a+i);
	p=(a+i);
    }
	cout<<"Max: "<<max<<" Address: "<<p;
}
int main(){
	int *a,n;
	cout<<"Enter n: ";cin>>n;
	a=new int[n];
	int *ptr=a;
	for(int i= 0;i<n;i++){
		cout<<"Enter a["<<i<<"]: ";cin>>*(ptr+i);
	}
	cout<<"------------------------------------"<<endl;
	for(int i= 0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
	cout<<"\n------------------------------------"<<endl;
	findmax(a,n);
}
