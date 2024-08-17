#include <bits/stdc++.h>
long long a[1010],b[1010];
using namespace std;
int main()
{
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
		} 
		sort(a,a+n);
		for(i=0;i<n-1;i++){
			if(a[i]==b[i]){
				swap(a[i],a[i+1]);
				i++;
			}
		}
		if(a[n-1]==b[n-1]) swap(a[n-1],a[n-2]);
		if(n>1)
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
		else cout<<"-1";
		cout<<endl;
	}
}
//1689B