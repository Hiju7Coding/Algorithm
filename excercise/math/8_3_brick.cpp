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
//#define MOD 1e9+7
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
Nhiệm vụ của bạn là xây một tòa tháp có chiều rộng là 2 và chiều cao là n. Bạn có nguồn cung cấp khối không giới hạn có chiều rộng và chiều cao là số nguyên.
Với n, bạn có thể xây dựng bao nhiêu tòa tháp khác nhau? Các tòa tháp đối xứng và xoay được tính riêng nếu chúng trông khác nhau.
Input :
- Dòng 1: Gồm một số nguyên dương t (số lượng test) (t <= 100)
- t dòng tiếp theo mỗi dòng chứa một số n đại diện cho chiều cao của tòa tháp (n <= 106).
Ouput:
t dòng mỗi dòng là đáp án của từng test. Số cách dựng có thể rất lớn hãy in ra đáp án sau khi đã modulo cho 109 + 7.
*/
// link: 
/* ----------------- test case -----------------
Input
10
1
2
3
4
5
6
7
8
9
10
Output
2
8
34
148
650
2864
12634
55756
246098
1086296
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
#define maxN 1000005 //10^6+5
const ll MOD = 1e9 + 7;
// init variables
ll dp[maxN][2];
// function
ll product(ll x, ll y) {
	return ((x%MOD) * (y%MOD))%MOD;
}
ll sum(ll x, ll y) {
	return (x%MOD + y%MOD)%MOD;
}
void pre(){
    dp[1][1] = dp[1][0] = 1;
    for (int i = 2; i <= maxN; ++i) {
		dp[i][0] = sum(product(4, dp[i-1][0]), dp[i-1][1]);
		dp[i][1] = sum(product(2, dp[i-1][1]), dp[i-1][0]);
	}
}
// solve
void solve(){
    // name variables
    ll t;in_n(t)
    pre();
    while (t--) {
        ll n;in_n(n)
        cout << sum(dp[n][0], dp[n][1]) << el;
    }
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