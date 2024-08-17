#include<bits/stdc++.h>
using namespace std;
int b,m,k,i,j,a[500];
char s[400];
int main(){
 
	cin>>b;
	while(b--){
		cin>>m>>k>>(s+1);
		memset(a,0,sizeof a);
		for(i=1;i<=m;i++)a[(int)s[i]]++;
		for(i=1;i<=k;i++){
			for(j=97;a[j]&&j<97+m/k;j++)a[j]--;
			cout<<(char)j;
		}
		cout<<"\n";
	}
}
//1737A