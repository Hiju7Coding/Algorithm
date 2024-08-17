#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re0 return 0;


#define INF 1e9
#define DINT -1e9
#define MOD 1000000007


#define db double
#define ll long long
#define ull unsigned long long
#define vec vector<ll>
#define mus multiset<ll>
#define pll pair<ll, ll>
#define mus_p multiset<pll>
#define deq deque<ll>

#define el '\n'
#define fi first
#define se second
#define fr front
#define bk back
#define bg begin
#define ed end

#define emp empty
#define pob pop_back
#define pof pop_front
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound

#define set_f(a) fixed << setprecision(a)
#define sz(x) x.size()
#define sz_str(s) s.length()
#define mx_ele(x) *max_element(all(x))

#define all(x) x.begin(), x.end()

#define for_i(i, a, b) for (ll i = a; i <= b; i++)
#define for_d(i, a, b) for (ll i = a; i >= b; i--)
#define whl(t) while(t--)

#define in_n(n) cin >> n;
#define in_ab(a, b) cin >> a >> b;
#define ms(a, x) memset(a, x, sizeof(a));
#define ina_n(a, n) for_i(i, 0, n-1) cin >> a[i];
#define ina_nm(a, n, m) for_i(i, 0, n-1) for_i(j, 0, m-1) cin >> a[i][j];

#define out_n(n) cout << n << el;
#define out_ab(a, b) cout << a << ' ' << b << el;
#define output_i(a, n) for_i(i, 0, n-1) cout << a[i] << ' ';
#define output_d(a, n) for_d(i, 0, n-1) cout << a[i] << ' ';
#define output_n(a, n, m) for_i(i, 0, n-1) {output(a[i], m); cout << el;}

using namespace std;
//#define maxN 100005 //10^5
// init variables

// function
bool comp(pair<pll,ll> a, pair<pll,ll> b){
    if(a.fi.fi == b.fi.fi) return a.fi.se > b.fi.se;
    else return a.fi.fi < b.fi.fi;
}

// solve
void solve(){
    ll n;in_n(n);pair<pll,ll> a[n+1];
    for_i(i, 1, n) {in_ab(a[i].fi.fi, a[i].fi.se);a[i].se = i;}

    sort(a+1, a+n+1, comp);
    ll ict[n+1] = {0}, ct[n+1] = {0};
    ll tmp = -1;
    for_i(i, 1, n){
        if(a[i].fi.se <= tmp) ict[a[i].se] = 1;
        tmp = max(tmp, a[i].fi.se);
    }
    tmp = INF;
    for_d(i, n, 1){
        if(a[i].fi.se >= tmp) ct[a[i].se] = 1;
        tmp = min(tmp, a[i].fi.se);
    }
    for_i(i, 1, n) cout << ct[i] << ' ';
    cout << el;
    for_i(i, 1, n) cout << ict[i] << ' ';
}
int main() {
    fast
    if (fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    solve();
    re0;
}
/*
Cho bạn n đoạn số nguyên liên tiếp có dạng [a,b] (b >= a). Nhiệm vụ của bạn là xác định xem đoạn [a,b] có chứa hoặc bị chứa bởi đoạn nào khác hay không.
Lưu ý: Đoạn [a,b] được gọi là chứa đoạn [c,d] nếu a <= c và b >= d.
Input: 
- Dòng 1: số nguyên dương n ( n <= 2.105).
- N dòng tiếp theo là các cặp số nguyên dương a, b đại diện cho đoạn [a,b]
Lưu ý: Không có đoạn [a,b] nào xuất hiện 2 lần trong Input.
Output:
Đầu tiên, in ra một dòng mô tả cho mỗi đoạn (theo thứ tự đầu vào) liệu nó có chứa một đoạn khác (1) hay không (0).
Sau đó, in ra một dòng mô tả cho mỗi đoạn (theo thứ tự đầu vào) liệu có đoạn khác chứa nó (1) hay không (0).
Ví dụ:
Input
4
1 6
2 4
4 8
3 6
Output
1 0 0 0
0 1 0 1
*/