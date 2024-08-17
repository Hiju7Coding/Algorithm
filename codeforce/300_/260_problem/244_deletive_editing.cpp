#include<bits/stdc++.h>
using namespace std;
string s, t;
int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		cin >> s >> t;
		bool ans = true;
		for (int i = s.size() - 1; i >= 0 and ans; --i)
			if (t.back() == s[i]) t.pop_back();
			else if (t.rfind(s[i]) != -1) ans = false;
		cout << (ans and t.empty() ? "YES\n" : "NO\n");
	}
	return 0;
}
//1666D