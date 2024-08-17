#include <iostream>
using namespace std;
int n,i,a,a1,b,f;
string s[3]={"maybe","unrated","rated"};
int main(){
cin>>n;
for(;i<n;i++){
	cin>>a>>b;
	if(a!=b){f=2;break;}
	if(i>0&&a>a1)f=1;
	a1=a;
	}
cout<<s[f];
}
//807A