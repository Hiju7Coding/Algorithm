#include <bits/stdc++.h>

#define maxn 200005
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    ll x[n]; 
    for(ll i = 0; i < n; i++) cin >> x[i];

    vector<ll> dp(n, 1);
    for(ll i = 1; i < n; i++) {
        for(ll j = 0; j < i; j++) {
            if(x[i] < x[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end());
    return 0;
}
/*
Cho dãy gồm n số nguyên hãy tìm dãy con giảm dài nhất. Dãy con giảm có nghĩa là phần tử đứng sau phải bé hơn phần tử đứng trước.
Input:
- Dòng 1: một số nguyên dương n (1 <= n <= 1000).
- Dòng 2: n số nguyên ai (|a| <= 109).
Output:
Một số duy nhất là độ dài của dãy con giảm dài nhất.

Ví dụ:
Input
8
8 3 4 6 4 5 2 1
Output
5

Giải thích: Dãy giảm dài nhất là 8 6 5 2 1. 
*/