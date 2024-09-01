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
Huy rất đam mê cờ bạc, nên thường cược gấp đôi mỗi lần thua cuộc, kết quả là Huy thường chỉ còn cái nịt sau mỗi cuộc cá cược. Gần đây Huy phát hiện một mẹo chơi rất hiệu quả bằng cách, nếu thua trắng 4 ván thì ván tiếp theo nên đặt tiền cược bằng tổng của 3 ván trước và gấp đôi ván gần nhất, nếu may mắn thì không chỉ gỡ được cả 4 bàn trong một ván mà thậm chí là còn thắng thêm được số tiền của ván gần nhất.
Tuy nhiên số Huy còn đen hơn cả mái tóc óng mượt từ dầu gội Sunsilk. Huy đã chơi cả n ván mà toàn thua sấp mặt. Huy đau đớn, Huy gục ngã nhưng Huy vẫn muốn đi vay mượn của bạn bè để chơi tiếp. Do đã quá lú sau n trận thua, Huy thậm chí còn không biết phải vay bao nhiêu mới có thể chơi được ván kế tiếp đúng với quy luật mà Huy đã đặt ra ban đầu. Mọi người hãy giúp Huy nhưng đừng như Huy nhé .
Input:
- Dòng 1 gồm 2 số n và mod. N đại diện cho số ván Huy đã chơi, mod là hệ số modulo ( 4  <=  n,mod  <= 1018 ).
- Dòng 2 gồm 4 số nguyên a, b, c, d đại diện cho tiền cược 4 ván đầu tiên mà Huy đã thua (1 <= a, b, c, d <= 106)
Output:
Một con số duy nhất là số tiền mà Huy cần phải mượn được ở ván tiếp theo (ván n+1).
Vì con số có thể rất lớn nên kết quả sẽ được Modulo cho mod.

20% subtask có n, mod <= 103
20% subtask có n, mod <= 109
60% Còn lại không giới hạn gì thêm
*/
// link: 
/* ----------------- test case -----------------
Input
6 1000
3 5 2 6
Output
144
Giải thích : 
Ván thứ 5 Huy phải cược bằng tổng tiền 3 ván đầu + ván 4 nhân đôi (3 + 5 + 2 + 6 * 2)  = 22 .
Tương tự ván thứ 6 số tiền của 3 ván trước đó và ván thứ 5 nhân đôi là (5 + 2 + 6 + 22*2) = 57. 
Ván thứ 7 (n+1) Huy phải cược là (2 + 6 + 22 + 57*2) = 144.

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
    ll n, mod;in_ab(n, mod);
    ll a, b, c, d;in_ab(a, b);in_ab(c, d);
    vll bs = {a, b, c, d};
    for_i(i, 4, n){
        ll x = (bs[i-4] + bs[i-3] + bs[i-2] + bs[i-1]*2) % mod;
        bs.pb(x);
    }
    out_n(bs[n]);
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