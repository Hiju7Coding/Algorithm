/*
Cho một mảng gồm n số nguyên và một số x. Hãy đếm số lượng các dãy con liên tiếp trong mảng có tổng bằng x.
Input:
- Dòng 1: 2 số nguyên n và x (1 <= n <= 2.105, 109 <= x <= 109).
- Dòng 2: n số nguyên ai  (109 <= ai <= 109).
Output:
Một dòng duy nhất là đáp án của bài toán.
Ví dụ:

Input
5 7
2 -1 3 5 -2
Output
2
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<ll, ll> prx;
    ll s = 0;
    ll count = 0;
    prx[0] = 1;
    for (int i = 0; i < n; ++i) {
        s += a[i];

        if (prx.find(s - x) != prx.end()) {
            count += prx[s - x];
        }

        prx[s]++;
    }

    cout << count;

    return 0;
    
}