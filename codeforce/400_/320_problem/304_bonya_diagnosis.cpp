#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int ans = 0;

	while(n--)
    {
		int s, d; cin >> s >> d;
		while(ans >= s) s += d;
		ans = s;
	}

	cout << ans;
}
//879A