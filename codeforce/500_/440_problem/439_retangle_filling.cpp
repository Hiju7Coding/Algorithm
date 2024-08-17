#include<bits/stdc++.h>
using namespace std;
int N,M;
string G[501];
bool check(int x,int y)
{
	int fr=0,fc=0;
	for(int i=0;i<N;i++)if(G[x][y]==G[i][M-1-y])fc=1;
	for(int i=0;i<M;i++)if(G[x][y]==G[N-1-x][i])fr=1;
	return (fr&&fc);
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>N>>M;
		for(int i=0;i<N;i++)cin>>G[i];
		int ans=(check(0,0)||check(0,M-1)||check(N-1,0)||check(N-1,M-1));
		cout<<(ans?"YES\n":"NO\n");
	}
}
//1966B