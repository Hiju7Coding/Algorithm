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
Mai Lê Hương từ nhỏ đã rất thích chơi trò chơi nhảy ô.
Hôm nay, trong giờ học lập trình nâng cao, Hương bỗng nảy ra ý tưởng về biến thể của trò chơi này.
Gỉa sử Hương đang đứng ở tọa độ 0 trên trục số.
Bây giờ cô ấy sẽ thực hiện N cú nhảy. Trong cú nhảy thứ 1 <= i <= N, cô ấy di chuyển ai hoặc bi theo chiều dương
Liệu Hương Mai có thể nhảy đến tọa độ X sau N cú nhảy không ?

Các ràng buộc:
1 ≤ N ≤ 100
1 <= ai < bi <= 100
1 <= X <= 10000
Các giá trị đều là số nguyên.
Input:
- Dòng đầu tiên chứa số nguyên N và X
- N dòng tiếp theo chứa 2 số nguyên ai và bi
Output:
- In ra "YES" nếu Hương Mai có thể nhảy đến tọa độ X sau N cú nhảy, ngược lại in ra "NO".
*/
// link: 
/* ----------------- test case -----------------
input:
2 10
4 7
3 5
output:
YES
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
//#define maxN 100005 //10^5
// init variables

// function

// solve
void solve(){
    // name variables
    ll n, x;in_ab(n, x);
    vll a(n), b(n);
    for_i(i, 0, n) in_ab(a[i], b[i]);

    bool dp[n+1][10001];
    ms(dp, false);
    dp[0][0] = true;

    for (ll i = 1; i <= n; i++) {
        for (ll j = 0; j <= x; j++) {
            if (dp[i-1][j]) {
                if (j + a[i-1] <= x) dp[i][j + a[i-1]] = true;
                if (j + b[i-1] <= x) dp[i][j + b[i-1]] = true;
            }
        }
    }
    if(dp[n][x]) cout << "Yes" << el;
    else cout << "No" << el;
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