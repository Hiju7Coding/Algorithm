#include<bits/stdc++.h>
using namespace std;
int N,M,k;
int main()
{
	int T;cin>>T;
	for(;T--;)
	{
		cin>>N>>M>>k;
		if(M*(N-k-1)>=N)cout<<"YES\n";else cout<<"NO\n";
	}
}
//1954A