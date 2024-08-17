#include<iostream>
using namespace std;
int n,k,t=-1,i=1,a,c,s;
int main(){
for(cin>>n>>k;i<=n;i++)
{	cin>>a,s+=a,
	c=min(8,s),
	k-=c,s-=c;
	if(k<=0&&t<0)
    t=i;
  
}
cout<<t;
}
//839A