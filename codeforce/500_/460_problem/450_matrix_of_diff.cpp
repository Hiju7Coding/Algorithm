#include<bits/stdc++.h>
using namespace std;
 
const int N=50;
int n,a[N*N+100];
 
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n*n;i++)
			if(i%2==1) a[i]=i/2+1;
			else a[i]=n*n-i/2+1;
		for(int i=1;i<=n;i+=2) reverse(a+i*n-n+1,a+i*n+1); 
		for(int i=1;i<=n*n;i++){
			cout<<a[i]<<" ";
			if(i%n==0) putchar('\n');
		}
	}
	return 0;
}
//1783B