#include <iostream>
using namespace std;
int main(){
	int n,m=0,t;
	cin>>n;
	while(n--){
		cin>>t;
		cout<<t+m<<" ";
		if(t+m>m){
			m=t+m;
		}
	}
}
//1326B