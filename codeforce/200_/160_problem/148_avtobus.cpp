#include<iostream>
using namespace std;
long long a,t;
int main(){
	cin>>t;
	while(t--){
		cin>>a;
		if(a<4||a%2==1) puts("-1");
		else{
			cout<<(a+4)/6<<' '<<a/4<<endl;
		} 
	}
}
//1679A