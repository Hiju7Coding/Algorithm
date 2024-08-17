#include <bits/stdc++.h>

#define maxn 200005
#define ll long long
#define el '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n, target;
	cin >> n >> target;

	vector<pair<ll, ll>> values;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		values.push_back({x, i + 1});
	}

	sort(values.begin(), values.end());
	ll left = 0;
	ll right = n - 1;
	while (left < right) {
		if (values[left].first + values[right].first > target) {
			right--;
		} else if (values[left].first + values[right].first < target) {
			left++;
		} else if (values[left].first + values[right].first == target) {
			cout << values[left].second << " " << values[right].second << el;
			return 0;
		}
	}

	cout << "IMPOSSIBLE" << el;
}