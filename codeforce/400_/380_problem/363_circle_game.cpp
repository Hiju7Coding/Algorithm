#include<bits/stdc++.h>
using namespace std;  
int n,a,t;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>a;
		int k=0,imin=a;
		for(int i=1;i<n;i++){
			cin>>a;
			if(imin>a)k=i,imin=a;
		}
		if(n%2||k%2)cout<<"Mike\n";
		else cout<<"Joe\n";
	}
	return 0; 
}
//1695B