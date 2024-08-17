#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ll n,t,i,a[209],c;
cin>>t;
while(t--){
    cin>>n;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=1;i<n;i++)if(abs(a[i]-a[i-1])!=1 && abs(a[i]-a[i-1])!=n-1)break;
		if(i!=n)cout<<"NO\n";
		else cout<<"YES\n";
	}
}
//1203A