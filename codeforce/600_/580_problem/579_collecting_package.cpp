#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,i,v,u;
	cin>>t;
	while(t--){
	pair<int,int > a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i].first>>a[i].second;
	sort(a,a+n);
	int x=0,y=0,f=0;
	string ans="";
	for(i=0;i<n;i++)
	{
		int u=a[i].first,v=a[i].second;
		if(v<y)
		{	f=1;
			cout<<"NO\n";
			break;
		}
		ans+=string(u-x,'R');
		ans+=string(v-y,'U');
		x=u;
		y=v;
	}
	if(!f)
	cout<<"YES\n"<<ans<<endl;}
	
}
//1294B