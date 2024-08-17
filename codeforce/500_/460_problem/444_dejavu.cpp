#include <bits/stdc++.h>
using namespace std;
int t, n, q;
int main()
{
	cin >> t;
	while(t--){
		cin >> n >> q;
		vector<int> a (n), s = {31};
		for(int& x : a) cin >> x;
		while(q--){
			int x; cin >> x;
			if(x < s.back()) s.push_back(x);
		}
		for(int x : a){
			for(int y : s){
				if(x % (1 << y) == 0) x |= 1 << y - 1;
			}
			cout << x << ' ';
		} cout << '\n';
	}
}
//1891B