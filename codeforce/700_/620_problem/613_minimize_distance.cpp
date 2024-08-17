#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    long long ans=0;
	    int a[n];
	    for(int i=0;i<n;i++){cin>>a[i];}
	    sort(a,a+n);
	    for(int i=n-1;i>=0&&a[i]>0;i-=k)ans+=a[i];
	    for(int i=0;i<n&&a[i]<0;i+=k)ans-=a[i];
	    cout<<2*ans-max(abs(a[0]),a[n-1])<<"\n";
	}
	return 0;
}

//1591C