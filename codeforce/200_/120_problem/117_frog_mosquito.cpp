#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll read(){
	ll a=0,b=getchar(),c=1;
	while(!isdigit(b))c=b=='-'?-1:1,b=getchar();
	while(isdigit(b))a=a*10+b-'0',b=getchar();
	return a*c;
}
const int N=200005; 
int n,m,x[N],t[N],c[N],d[N],a[N*4];
multiset<pair<int,int> > st;
bool cmp(int u,int v){
	return x[u]<x[v];
}
int add(int p,int v,int w,int l,int r){
	if(p<l or p>=r)return a[w];
	if(l+1==r)return a[w]=x[d[p]]+v;
	int mid=(l+r)>>1;
	return a[w]=max(add(p,v,w*2,l,mid),add(p,v,w*2+1,mid,r));
}
int query(int p,int w,int l,int r){
	if(l+1==r)return (a[w]>=p and x[d[l]]<=p)?l:-1;
	int mid=(l+r)>>1;
	return a[w*2]>=p?query(p,w*2,l,mid):query(p,w*2+1,mid,r);
}
int main(){
	n=read(),m=read();
	for(int i=0;i<n;i++)
		x[i]=read(),t[i]=read(),d[i]=i;
	sort(d,d+n,cmp);
	for(int i=0;i<n;i++)
		add(i,t[d[i]],1,0,n);
	while(m--){
		int p=read(),b=read();
		int i,k=query(p,1,0,n);
		if(k==-1)st.insert({p,b});
		else{
			i=d[k],c[i]++,t[i]+=b;
			while(st.size()){
				multiset<pair<int,int> >::iterator it=st.lower_bound({x[i],-1});
				if(it==st.end() or x[i]+t[i]<it->first)break;
				c[i]++,t[i]+=it->second,st.erase(it);
			}
			add(k,t[i],1,0,n);
		}
	}
	for(int i=0;i<n;i++)
		printf("%d %d\n",c[i],t[i]);
	return 0;
}
//609F