#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; 
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		int l=s.size();
		int i=l-1;
		while(i>0&&s[i]!='1') 
		i--;
		int j=0;
		while(j<l-1&&s[j]!='0')
		j++;
		printf("%d\n",max(j-i+1,1));
	}
} 
//1675C