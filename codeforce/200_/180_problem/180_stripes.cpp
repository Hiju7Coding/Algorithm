#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	int T; scanf("%d",&T);
	while(T--){
		int flg=0;
		for(int i=1;i<=8;i++)
			cin>>s,flg|=s=="RRRRRRRR";
		cout<<(flg?"R\n":"B\n");
	}
}
//1742C