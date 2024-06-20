#include<bits/stdc++.h>

using namespace std;

void sove(){
	int n,k;
	cin>>n>>k;
	int su=0;
	string a;
	cin>>a;
	for(int i=0;i<n;i++)su+=(a[i]=='B');

	int i=0;
	char c='B';
	while(su!=k)
	{
		if(su<k&&a[i]=='A')su++,c='B';
		if(su>k&&a[i]=='B')su--,c='A';
		i++;
	}
	if(i)cout<<1<<"\n"<<i<<" "<<c<<"\n";
	else cout<<0<<"\n";
}
int main ()
{
	int n;
	cin>>n;
	while(n--)sove();
 }
 //1898A