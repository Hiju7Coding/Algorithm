#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int T;cin>>T;while(T--){
		int n;cin>>n;
		int mi=0,ma=1e9,last;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			if(i>0){
				if(last<x)ma=min(ma,last+x>>1);
				if(last>x)mi=max(mi,last+x+1>>1);
			}
			last=x;
		}
		if(mi<=ma)cout<<mi<<'\n';
		else puts("-1");
	}
}
//1772D