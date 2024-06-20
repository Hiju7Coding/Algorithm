#include<bits/stdc++.h>
using namespace std;int T_T,n,i,j,x;
int main(){
	for(scanf("%d",&T_T);T_T--;){
		map<int,int>mp;scanf("%d",&n);vector<int>a(n,1);int cnt=1;
		for(i=0;i<n;++i){
			scanf("%d",&x);
			if(++mp[x]==2&&cnt<3)a[i]=++cnt;
		}
		if(cnt==3)for(int i:a)cout<<i<<" ";else cout<<"-1";
		cout<<endl;
	}
}
//1894B