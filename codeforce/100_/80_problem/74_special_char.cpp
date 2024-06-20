#include<iostream>
using namespace std;
int n,T;
int main(){
cin>>T;
while(T--){
cin>>n;
if(n%2)cout<<"NO";
else{
cout<<"Yes\n";
for(int i=0;i<n/2;i++)cout<<"AAB";
		}
		cout<<endl;
	}
}
//1948A