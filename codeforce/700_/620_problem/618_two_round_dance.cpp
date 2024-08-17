#include<bits/stdc++.h>
using namespace std;
long long n;
long long ans=1;
int main(){
	cin>>n;
	for(int i=1;i<n;i++) ans*=i;
	cout<<ans*2/n;
}
//1433E