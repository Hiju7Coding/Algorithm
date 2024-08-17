/*
Có n người đọc và m cuốn sách. Mỗi người sẽ có tốc độ đọc nhanh chậm khác nhau, do đó bạn cần phân bổ hợp lý để thời lượng đọc xong tất cả các cuốn sách là ngắn nhất.
Input: 
- Dòng 1: 2 số nguyên dương n và m ( n <= 2.105, m <= 109).
- Dòng 2: n số nguyên dương ai ( ai < 109).
Ouput:
Một số duy nhất là đáp án của bài toán.
Ví dụ:

Input
3 7

3 2 5
Output
8


Giải thích:
Người số 1 sẽ đọc 2 cuốn sách, người số 2 sẽ đọc 4 cuốn và người thứ 3 sẽ đọc 1 cuốn.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool can(const vector<ll>& speeds, int n, ll m, ll time) {
    ll total = 0;
    for (int i = 0; i < n; ++i) {
        total += time / speeds[i];
        if (total >= m) return true;
    }
    return total >= m;
}
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
    ll max_v = *max_element(a.begin(), a.end());
    ll low = 1, high = max_v * x;
    while (low < high) {
        ll mid = low + (high - low) / 2;
        if (can(a, n, x, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << low;
    return 0;
    
}