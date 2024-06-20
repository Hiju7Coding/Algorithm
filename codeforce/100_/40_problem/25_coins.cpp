#include<iostream>
using namespace std;
int main(){
	long long int t,n,k;
	cin>>t;
	while(t>0){
		cin>>n>>k;
		cout<<((n%2==0||k%2==1)?"YES\n":"NO\n");
		t--;
	}
}