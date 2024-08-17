#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re0 return 0;

#define maxn 200005
#define INF 1e9
#define MOD 1000000007

#define db double
#define ll long long
#define ull unsigned long long

#define el '\n'

#define fi first
#define se second

#define pb push_back
#define mp make_pair

#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define for_i(i, a, b) for (ll i = a; i <= b; i++)
#define for_d(i, a, b) for (ll i = a; i >= b; i--)
#define whl(t) while(t--)
#define input(a, n) for_i(i, 0, n-1) cin >> a[i];

#define vec vector<ll>
#define mus multiset<ll>
#define mus_p multiset<pair<ll, ll>>

using namespace std;
ll gift(ll a[maxn], ll n) {
    if (n == 0) return 0;
    if (n == 1) return a[0];
    ll dp_odd[maxn], dp_even[maxn];
    dp_odd[0] = 0;
    dp_even[0] = a[0];
    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            dp_even[i] = max(dp_even[i-1], dp_odd[i-1] + a[i]);
            dp_odd[i] = dp_odd[i-1];
        } else {
            dp_odd[i] = max(dp_odd[i-1], dp_even[i-1] + a[i]);
            dp_even[i] = dp_even[i-1];
        }
    }

    return max(dp_odd[n-1], dp_even[n-1]);
}
int main() {
    fast
    ll n;cin >> n;
    ll x[maxn];
    for(ll i = 0; i < n; i++) {
        cin >> x[i];
    }
    cout<<gift(x,n);
    re0;
}
/*
long long odd_sum = 0;
long long even_sum = 9;

for (int i = 1; i < n; ++i) {
    if (i % 2 == 0) {
        even_sum = max(even_sum, odd_sum + a[i]);
    } else {
        odd_sum = max(odd_sum, even_sum + a[i]);
    }
}
*/
/*
Có n món quà. Hải được phép lấy quà từ trái sang phải theo quy luật. Nếu đã chọn quà ở vị trí lẻ thì món tiếp theo phải ở vị trí chẵn và ngược lại. Hãy tìm tổng giá trị quà cao nhất mà Hải có thể nhận.
Lưu ý: Vị trí quà được đánh số từ 0.
Input :
- Dòng 1: Số nguyên dương n ( 1 <= n <= 1000).
- Dòng 2: n số nguyên ai (|ai|<= 109).
Ouput:
Một dòng duy nhất là đáp án của bài toán.

Ví dụ:

Input
10
9 -9 8 7 -1 2 -8 -6 1 1 
Output

19

Giải thích :
Hải sẽ lấy các món quà ở vị trí 0 3 4 5 8 9.

*/