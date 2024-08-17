#include<bits/stdc++.h>
using namespace std;
int x,i,j,k,l,n,m,a[1007],sum;
int main()
{
	cin>>n>>m;for(i=0;i<n;i++) cin>>a[i],sum=sum+a[i],x=max(x,a[i]);
	cout<<(max((sum+m+n-1)/n,x))<<" "<<(x+m);
}
//1042A