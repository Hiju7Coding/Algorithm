#include <bits/stdc++.h>
using namespace std;
int t,n,a[200005];
int main(){
cin>>t;
while(t--){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	int l=0,r=1e9;
	while(l<r){
		int m=(l+r)/2,i=1,j=n;
		while(i+1<=n&&a[i+1]-a[1]<=2*m)i++;
		while(j-1>0&&a[n]-a[j-1]<=2*m)j--;
		i++,j--;
		if(i>j||a[j]-a[i]<=2*m)r=m;
		else l=m+1;
	}
	cout<<l<<"\n";
}
}
//1840D