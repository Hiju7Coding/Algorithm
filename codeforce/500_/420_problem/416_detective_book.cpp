#include<bits/stdc++.h>
#define LP 1000000007
using namespace std;
int main()
{
int n,a,c=0,mx=0;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a;
	mx = max(a,mx);
	if(mx==i){
		c++;
	}
}
cout<<c<<"\n";
return 0;
}
//1140A