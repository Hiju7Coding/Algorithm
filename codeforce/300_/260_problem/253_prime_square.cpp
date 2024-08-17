#include<iostream>
using namespace std;
int main(){
	int t,n,i,j;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		cout<<(i==j or i==j-1 or(i==n-1 and j==0))<<(j==n-1 ? '\n' : ' ');
	}
}
//1436B