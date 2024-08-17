#include<bits/stdc++.h>
using namespace std;const int N=2e6+10;
int T_T,n,i,j,num,a[N];map<int,int>mp1, mp2;long long ans;
int main(){
	for(cin>>T_T;T_T--;){
		for(cin>>n,num=ans=0,mp1.clear(),mp2.clear(),i=1;i<=n;++i)cin>>a[i];
		for(i=1;i<=n;++i)mp1[a[i]]=i;
		for(i=1;i<=n;++i){
			if(!mp2[a[i]])mp2[a[i]]=i,num++;
			if(mp1[a[i]]==i)ans+=num;
		}
		cout<<ans<<endl;
	}
}
//1883F