#include <bits/stdc++.h> 
#define ll long long
#define mp make_pair
using namespace std;  
 
long long n,t,h,x;

int main() { 
	cin >> t;
	while(t--){
		cin >> n;
		int b[n+1];
		bool y=1;
		for(int i = 1;i<=n;i++)b[i]=i;
		for(int j = 1;j <= n;j++){
			cin >> h;
			if(h<j)y=0;
			if(h>j)swap(b[j],b[h]);
		}
		if(y){
			for(int i = 1;i < n;i++)cout << b[i] << ' ';
			cout <<b[n] << '\n';
		}else cout << "-1\n";
	}
} 

//1227B