#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 200010
int t,n,res[N];
char s[N];
void work()
{
	for(int i = n;i >= 1;--i) s[i] = (s[i] == s[1] ? 1 : 2);

	int num = 0,w = s[1];
	for(int i = 1;i <= n;res[i] = w,++i)
		if(s[i] == w) num++;
		else if(--num < 0) num = 1,w = 3 - w;

	if(num == 0) {
		cout<<*max_element(res + 1,res + n + 1)<<endl;
		for(int i = 1;i <= n;++i) cout<<res[i]<<" ";
		cout<<endl;
	}
	else cout<<-1<<endl;
}
signed main()
{
	ios::sync_with_stdio(false);

	cin>>t;
	while(t--) cin>>n>>s + 1,work();

	return 0;
}
//1837D
/*
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 1010
int t,n,res[N];
char s[N];
void work()
{
	for(int i = n;i >= 1;--i) s[i] = (s[i] == s[1] ? 1 : 2);

	int num = 0,w = s[1];
	for(int i = 1;i <= n;res[i] = w,++i)
		if(s[i] == w) num++;
		else if(--num < 0) num = 1,w = 3 - w;

	if(num == 0) {
		cout<<*max_element(res + 1,res + n + 1)<<endl;
		for(int i = 1;i <= n;++i) cout<<res[i]<<" ";
		cout<<endl;
	}
	else cout<<-1<<endl;
}
signed main()
{
	ios::sync_with_stdio(false);

	cin>>t;
	while(t--) cin>>n>>s + 1,work();

	return 0;
}
*/