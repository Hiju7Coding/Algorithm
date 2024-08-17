#include<bits/stdc++.h>
using namespace std;
int n,m,r,d;
int main(){
	for(cin>>n,r=n>9;n>9;n/=10)d=n%10,r+=9-d;
	cout<<r+9;
}
//1157A