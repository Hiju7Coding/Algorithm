#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=2e5+5;
int n,q,a[N],b[N],c,d;
LL s;
int main(){
	cin>>n>>q;
	for (int i=1;i<=n;i++)
		cin>>a[i],s+=a[i];
	for (int i=1;i<=q;i++){
        int o,x,y;
		cin>>o;
		if (o==1){
			cin>>x>>y;
			if (b[x]==d) s+=y-a[x],a[x]=y;
			else b[x]=d,s+=y-c,a[x]=y;
		}
		else cin>>x,c=x,d=i,s=1ll*c*n;
		cout<<s<<endl;
	}
	return 0;
}
//1679B