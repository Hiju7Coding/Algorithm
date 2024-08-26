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
Tèo rất thích halloween vì cứ mỗi dịp như vậy Tèo lại được lấy kẹo thỏa thích. 
Con phố Tèo ở được đánh số từ 1. Vì sợ Tèo sâu răng nên mẹ tèo quy định những ngôi nhà nào có số hiệu chia hết cho 2 nhưng không chia hết cho 4 thì Tèo sẽ được lấy 1 viên kẹo, 
những ngôi nhà nào chia hết cho 4 nhưng không chia hết cho 8 thì Tèo được lấy 2 viên kẹo, 
những ngôi nhà nào có số hiệu chia hết cho 8 nhưng không chia hết cho 16 thì Tèo được lấy 3 viên kẹo... 
tương tự những ngôi nhà nào có số chia hết cho 2i nhưng không chia hết cho 2i+1 thì tèo nhận được i viên kẹo. 
Mẹ Tèo cũng quy định Tèo chỉ được lấy kẹo từ ngôi nhà thứ a cho đến ngôi nhà thứ b. Bạn hãy xác định số kẹo mà Tèo lấy được.
Input: 
Một dòng gồm 2 số nguyên dương a, b ( 1 <= a <= b <= 1018).
Output:
Một dòng là đáp án của bài toán.

Lưu ý : Tèo tất nhiên không nhận được kẹo ở những ngôi nhà có chỉ số lẻ.
20% subtask có |b - a| <= 100
20% subtask có |b - a| <= 10000
Còn lại không giới hạn gì thêm
*/
// link: 
/* ----------------- test case -----------------
Input
5 15
Output
8
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
//#define maxN 100005 //10^5
// init variables

// function
ll cnt(ll x) {
    ll r = 0;
    for(ll i=1; (1LL<<i)<=x; i++) {
        r += i*(x/(1LL<<i)-x/(1LL<<(i + 1)));
    }
    return r;
}
// solve
void solve(){
    // name variables
    ll a, b;in_ab(a, b);
    cout << cnt(b) - cnt(a - 1);
    //tle
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