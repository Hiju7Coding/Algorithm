#include <bits/stdc++.h>
using namespace std;
int a[200000],b[200000];
int main()
{
	int t,n,k,i,j,s,m,m1;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		m=0;
		m1=0;
		s=0;
		for(i=0;i<n;i++){
			if(i<k){
			s+=a[i];
			m=max(m,b[i]);
			m1=max(m*(k-1-i)+s,m1);}
		}
		cout<<m1<<endl;
	}
}
//1914C