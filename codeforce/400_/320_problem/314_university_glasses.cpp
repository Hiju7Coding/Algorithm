#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,a[7]={0};
	cin>>n;
	string b;
	for(ll i=0;i<n;i++){
		cin>>b;
		for(ll j=0;j<7;j++)
		if(b[j]=='1'){
			a[j]++;
		}
	}
	sort(a,a+7);
	cout<<a[6]<<endl;
}
//847G