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
Khánh Duy sẽ nấu N món ăn, đặt là món ăn 1 tới N.
Món ăn thứ i có thể được nấu bằng lò nướng trong Ti phút liên tục.
Không thể sử dụng lò nướng để nấu 2 món ăn cùng một lúc.
Khánh Duy muốn nấu tất cả các món ăn trong thời gian ngắn nhất có thể.
Nếu Duy có 2 lò để dùng thì cần ít nhất bao nhiêu phút để nấu tất cả N món ?
Gỉa sử các quy trình khác ngoài việc sử dụng lò nướng đều tốn thời gian không đáng kể.

Các ràng buộc:
1 ≤ N ≤ 100
1 ≤ Ti ≤ 10^3
Các giá trị đều là số nguyên.
Input:
- Dòng đầu tiên chứa số nguyên N
- Dòng thứ hai chứa N số nguyên
Output:
- In ra thời gian ngắn nhất để nấu tất cả N món ăn.
*/
// link: 
/* ----------------- test case -----------------
Input:
5
8 4 6 2 5
Output:
13
Ở ví dụ trên, Duy có thể sử dụng 2 lò nướng như sau để có thể nấu tất cả các món trong 13 phút.
- Lò đầu tiên: Nấu món 5 và 1 theo thứ tự.
- Lò thứ 2: Nấu món 2, 4, và 3 theo thứ tự.
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
    ll n;in_n(n)
    vll a(n);ina_n(a, n);
    ll sum = accumulate(all(a), 0);
    vector<bool> dp(sum/2 + 1, false);
    dp[0] = true;
    for_i(i, 0, n-1) {
        for_d(j, sum/2, a[i]) {
            dp[j] = dp[j] || dp[j - a[i]];
        }
    }
    ll res = 0;
    for_i(i,0,sum/2) if (dp[i]) res = i;
    out_n(max(res, sum - res));
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