#include<bits/stdc++.h>
using namespace std;
int c[10005],d[10005];
struct P{
	int x,y,id;
	bool operator <(P a){return x<a.x||x==a.x&&y<a.y;}
}a[1005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s=0,f=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++) cin>>a[i].x,a[i].id=i;
		for(int i=1;i<=n;i++) cin>>a[i].y;
		for(int i=1;i<=n;i++) for(int j=n;j>i;j--)
			if(a[j]<a[j-1]) c[++s]=j,d[s]=j-1,swap(a[j],a[j-1]);
		for(int i=2;i<=n;i++) if(a[i].y<a[i-1].y) f=1;
		if(f){puts("-1");continue;}
		printf("%d\n",s);
		for(int i=1;i<=s;i++) printf("%d %d\n",c[i],d[i]);
	}
}

//1681C