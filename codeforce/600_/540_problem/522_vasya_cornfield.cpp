#include<bits/stdc++.h>
using namespace std;
int n,d,m,x,y,a;
int main(){
	for(cin>>n>>d>>m;m--;)
		cin>>x>>y
		,a=x+y<=n+n-d&&x+y>=d&&y>=x-d&&y<=x+d,
	cout<<(a?"yes":"no")<<endl;
}

//1058B