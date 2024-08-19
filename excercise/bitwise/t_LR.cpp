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
Cho n và n số nguyên. Với q truy vấn, mỗi truy vấn gồm một cặp [L R]. Các bạn cần tính giá trị or của tất cả phần tử trong đoạn [L, R] (aL or aL+1 or...aR).
Input: 
-Dòng 1: 2 số nguyên n và q ( 1 <= n,q <= 2.105).
-Dòng 2: n số nguyên ai ( |ai|<= 109).
-Q dòng tiếp theo mỗi dòng gồm 2 số L, R ( 1 <= L <= R <= n).
Output:
Q dòng mỗi dòng là đáp án của các truy vấn.
*/
// link: http://upcoder.xyz/'index.php/9200d4c9b026f9552dbf56074c771b3f45458f5ab4f7636059a6becdd73b09cf/kuxRI''xqLqNex@y43'iSLK3~rhs'qvqjlPot'uzbRlu'5.9@'-_-8a@M2N6?9P-Kjh.5_8e6Lj0kEgE8.%27Xr0/b74668123c445edb462a48b5ff77b9fbaf7bebb65635bbf68c374178b409ed8b
/* ----------------- test case -----------------
Input
6 2
1 2 3 4 5 6
3 5
1 2
Output
7
3
Giải thích :
 2|3|4 = 111 = 7
 1|2 = 11 = 3
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
#define maxN 200005 //2*10^5
// init variables
ll n,t,a[maxN],pre_or[maxN][32];
// function
// solve
void solve(){
    // name variables
    in_ab(n,t);ina_n(a,n);
    for_i(i,1,n){
        for_i(j,0,31){
            pre_or[i][j] = pre_or[i-1][j] + ((a[i-1]>>j)&1);
        }
    }
    for_i(i,1,t){
        ll l,r;in_ab(l,r);
        ll rs = 0;
        for_i(j,0,31){
            if((pre_or[r][j] - pre_or[l-1][j]) > 0){
                rs |= (1<<j);
            }
        }
        out_n(rs);oel;
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