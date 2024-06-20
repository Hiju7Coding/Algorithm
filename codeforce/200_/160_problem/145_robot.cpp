#include<bits/stdc++.h>
using namespace std;
int s[6][6];
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int xx=n,yy=m;
		char c;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			cin>>c;
			if(c=='R') xx=min(xx,i),yy=min(yy,j);
			s[i][j]=c;
		}
		if(s[xx][yy]=='R') puts("YES");
		else puts("NO");
	}
}
//1680B