#include<bits/stdc++.h>
using namespace std;
long long a[100000],dl[100000],dr[100000];
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	int T,n,q,i,u,v;
	cin>>T;
        while(T--)
	{
		cin>>n;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=1;i<n;i++)
		{
			dl[i]=a[i]-a[i-1];
			dr[i]=a[i]-a[i-1];
		}
		for(i=1;i<n-1;i++)
		{
			if(a[i]-a[i-1]<a[i+1]-a[i]) dr[i]=1;
			else dl[i+1]=1;
		}
		dl[1]=1;
		dr[n-1]=1;
		for(i=1;i<n;i++)
		{
			dl[i]+=dl[i-1];
			dr[i]+=dr[i-1];
		}
		for(cin>>q;q>0;q--)
		{
			cin>>u>>v;
			u--;
			v--;
			if(u<v)cout<<dl[v]-dl[u]<<endl;
			else cout<<dr[u]-dr[v]<<endl;
		}
	}
	return 0;
}
//1922C