#include <bits/stdc++.h>
/*
#include <fstream>
#include <vector>
#include <algorithm>
*/
//syntax
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define br break;
#define ctn continue;
#define re0 return 0;
#define el '\n'
// constants
#define INF 1e9
#define DINT -1e9
#define MOD 1e9+7
// data types
#define db double
#define ll long long
#define ull unsigned long long
#define vll vector<ll>
#define sll set<ll>
#define us_ll unordered_set<ll>
#define mll multiset<ll>
#define qll queue<ll>
#define lis_ll list<ll>
#define st_ll stack<ll>
#define pq_ll priority_queue<ll>
#define dq_ll deque<ll>
#define pll pair<ll, ll>
#define mp_ll map<ll, ll>
#define um_ll unordered_map<ll, ll>
#define ss_pll set<pll>
#define ms_pll multiset<pll>
// macros
#define fi first
#define se second
#define fr front
#define re rear
#define bk back
#define bg begin
#define rbg rbegin
#define ed end
#define red rend
// functions
#define rsz resize
#define emp empty
#define pob pop_back
#define pof pop_front
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
// vector functions
#define set_f(a) fixed << setprecision(a)
#define sz(x) x.size()
#define sz_str(s) s.length()
#define mx_ele(x) *max_element(all(x))
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
// loops
#define for_i(i, a, b) for (ll i = a; i <= b; i++)
#define for_d(i, a, b) for (ll i = a; i >= b; i--)
#define whl(t) while(t--)
// input
#define in_n(n) cin >> n;
#define in_ab(a, b) cin >> a >> b;
#define ms(a, x) memset(a, x, sizeof(a));
#define ina_n(a, n) for_i(i, 0, n-1) cin >> a[i];
#define ina_nm(a, n, m) for_i(i, 0, n-1) for_i(j, 0, m-1) cin >> a[i][j];
// output
#define oel cout << el;
#define out_n(n) cout << n;
#define out_ab(a, b) cout << a << ' ' << b;
#define output_i(a, x, n) for_i(i, x, n-1) cout << a[i] << ' ';
#define output_d(a, x, n) for_d(i, x, n-1) cout << a[i] << ' ';
#define output_n(a, n, m) for_i(i, 0, n-1) {output(a[i], m); cout << el;}
/* ------------------ problem ------------------
Idol Thái Kim Yến đang có bất thần nhiều Moe

Có 5 hốc ở các toạ độ 0, 1, 2, 3, và 4 trên trục số, được kết nối với tôi cửa Moe.

Bây giờ, N con Moe sẽ xuất hiện từ những cái hố đó. Được biết con Moe thứ i sẽ xuất hiện từ hố có toạ độ X_i ở thời điểm T_i, và có kích thước là A_i.

Thái Yến đang ở toạ độ 0 thời điểm 0 và có thể di chuyển trên đường thẳng với tốc độ lớn nhất là 1. Yến có thể bắt 1 con Moe xuất hiện từ 1 cái hố khi và chỉ khi cô ấy đang ở toạ độ của cái hố đó ngay khi con Moe xuất hiện.

Thời gian để bắt 1 con Moe là không đáng kể.

Tìm tổng kích thước tối đa của Moe mà Thái Yến bắt được khi di chuyển tới ưu.

**Các ràng buộc**
- 1 <= N <= 10^5 
- 0 < T_1 < T_2 < ... < T_N <= 10^5
- 0 <= X_i <= 4
- 1 <= A_i <= 10^9
- Các giá trị đầu vào là số nguyên.

**Đầu vào**
- N
- T_1, X_1, A_1
- T_2, X_2, A_2
- ...
- T_N, X_N, A_N

**Đầu ra**
- In kết quả là 1 số nguyên.
*/
/* ----------------- test case -----------------
input:
3
1 0 98
3 3 7
5 4 4
output:
102
Chiến lược tối ưu như sau:

Đợi ở toạ độ 0 để bắt con Moe đầu tiên ở thời điểm 1.
Tới toạ độ 4 để bắt con Moe thứ 3 ở thời điểm 5.
Không thể bắt cả con Moe thứ nhất và thứ 2 được, nên đây là cách tốt nhất Yến có thể làm.
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
//#define maxN 100005 //10^5
// init variables

// function
ll maxMoe(ll n, const map<pll, ll> &moe){
    ll maxMoe = moe.rbegin()->fi.fi;
    vector<vll> dp( maxMoe+1, vll(5, 0));

    for_i(i, 1, maxMoe){
        for_i(j, 0, 4){
            dp[i][j] = dp[i-1][j];
            if (j > 0) dp[i][j] = max(dp[i][j], dp[i-1][j-1]);
            if (j < 4) dp[i][j] = max(dp[i][j], dp[i-1][j+1]);
            if(moe.find(mp(i, j)) != moe.end()){
                dp[i][j] += moe.at(mp(i, j));
            }
        }
    }
    return *max_element(all(dp[maxMoe]));
}
// solve
void solve(){
    // name variables
    ll n;in_n(n);
    map<pll, ll> moe;
    for_i(i, 1, n){
        ll t, X, A;
        in_ab(t, X);
        in_n(A);
        moe[mp(t, X)] = A;
    }
    // 14/30 test cases
    out_n(maxMoe(n, moe));
}
// main
int main() {
    fast
    /*
    if (fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    */
    solve();
    re0;
}
/*
code by: Hiju7 (full name: Hieu Nguyen Tan)
date of create: 
tag: 

contact me if you have any questions or issues with this code
contact: 
    instagram: @imhiju7
    fb: https://facebook.com/imhiju7
    github: imhiju7
Thank you for reading this code. have a nice day :D
*/