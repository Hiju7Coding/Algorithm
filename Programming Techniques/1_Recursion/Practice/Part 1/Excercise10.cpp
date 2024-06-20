#include<iostream>
using namespace std;
int Greatest_common_divisor(int n,int k,int max);
int main(){
	int n,k=1,m=0;
	cout<<"Enter number: ";cin>>n;
	int t= Greatest_common_divisor(n,k,m);
	cout<<"Greatest common divisor is: "<<t;
}
int Greatest_common_divisor(int n,int k,int max){
	if(k==n){
	  if(k>max && k%2!=0) return k;
	  else return max;
	}
    if((n%k==0) && (k%2==1)){
    if(k > max){
       max = k;
       Greatest_common_divisor(n,k+1,max);
    }
}
    else Greatest_common_divisor(n,k+1,max); 
}
