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
#define MOD 1000000007
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
Trong Squid Game (trò chơi Con Mực) có một trò buộc những người tham gia phải đi qua một cây cầu kính. Người chơi sẽ chỉ được lựa chọn bước lên một trong 2 ô tiếp theo, nếu tấm kính là kính cường lực thì người chơi sẽ an toàn, nếu tấm kính là kính thông thường thì người chơi sẽ rơi xuống vực. Nhiệm vụ của bạn là tính xem có tổng cộng bao nhiêu cách đi để người chơi có thể về đích mà không bị rơi xuống vực.
Input:
- Dòng 1: Gồm một xâu S các ký tự "X", "O" với "X" là kính cường lực và "O" là kính thường. Đại diện cho các tấm kính bên trái cây cầu.
- Dòng 2: Cũng tương tự nhưng đại diện cho các tấm kính bên phải cây cầu.
Output:
Một dòng duy nhất là đáp án của bài toán.
Lưu ý: Số cách đi có thể rất lớn nên các bạn chỉ cần in ra đáp án khi chia lấy dư cho 109 + 7. Độ dài của 2 xâu trên không vượt quá 106 ký tự.

Giới hạn:
25% subtask có |S| <= 20
25% subtask có |S| <= 104
50% còn lại không giới hạn gì thêm.
*/
// link: 
/* ----------------- test case -----------------
Input
XOXOX
XXOXX
Output
4
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
//#define maxN 100005 //10^5
// init variables

// function
ll way(string& l, string& r) {
    ll n = sz_str(l);
    vll dp(n + 1, 0);

    dp[0] = 1;
    for_i(i, 1, n) {
        if (l[i-1] == 'X') {
            dp[i] = (dp[i] + dp[i-1]) % MOD;
        }
        if (r[i-1] == 'X') {
            dp[i] = (dp[i] + dp[i-1]) % MOD;
        }
    }
    return dp[n] % MOD;
}
// solve
void solve(){
    // name variables
    string s1, s2;in_ab(s1, s2);
    out_n(way(s1, s2));
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