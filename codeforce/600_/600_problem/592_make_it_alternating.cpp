#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int k=1;k<=t;k+=1){
		string s;
		cin>>s;
		long long m=s.length(),cnt=0,sum1=0,sum2=1;
		for(int i=0;i<=m-1;i+=1){
			if(i==m-1||s[i]!=s[i+1]) sum1+=cnt,sum2=sum2*(cnt+1)%998244353,cnt=0;
			else cnt++;
		}
		for(int j=1;j<=sum1;j+=1) sum2=sum2*j%998244353;
		cout<<sum1%998244353<<' '<<sum2%998244353<<endl;
	}
} 
//1879C