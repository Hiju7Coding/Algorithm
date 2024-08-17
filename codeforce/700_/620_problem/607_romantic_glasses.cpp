#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n,x,s=0;
		cin>>n;
		map<ll,ll>P;
		bool can=0;
		while(n--){
			cin>>x;
			s+=n%2?-x:x;
			can|=!s||P[s];
			P[s]++;
		}
		cout<<(can?"YES\n":"NO\n");
	}
	return 0;
}

//1915E