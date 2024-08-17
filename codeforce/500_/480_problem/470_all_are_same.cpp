#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)	cin>>a[i];
	int g = 0;
	for(int i=0;i<n-1;i++){
		g = __gcd(g,abs(a[i]-a[i+1]));
	}
	if(g == 0)	cout<<-1<<endl;
	else	cout<<g<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)	solve();

	return 0;
}
//1593D1