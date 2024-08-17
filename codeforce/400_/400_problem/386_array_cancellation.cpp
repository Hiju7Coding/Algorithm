#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		long long x;
		long long c = 0;
		while(n--){
			cin >>  x;
			c = max(0LL, c+x);
		}
		cout << c << endl;
	}
}
//1405B