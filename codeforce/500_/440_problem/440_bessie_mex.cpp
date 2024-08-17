#include <bits/stdc++.h>

using namespace std;


int main() {
	int ntest; cin >> ntest;
	while (ntest--) {
		int n; cin >> n;
		int mex = 0;
		for (int i=0; i<n; i++) {
			int ai; cin >> ai;
			if (ai<0) cout << -ai+mex << ' ';
			else {
				cout << mex << ' ';
				mex += ai;
			}
		}
		cout << '\n';
	}
}
//1942B