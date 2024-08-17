#include <bits/stdc++.h>
using namespace std;
int k,n,m,i;
int main(){
	cin>>k;
	for(n=5;n*n<=k&&k%n;n++);
	m=k/n;
	if(k%n||m<5)cout<<-1;
	else for(;i<k;i++)cout<<"aeiou"[(i%m+i/m)%5];
}
//1166B