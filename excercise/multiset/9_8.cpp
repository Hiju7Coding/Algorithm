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
Bạn được cho một mảng gồm n số nguyên. Nhiệm vụ của bạn là tính toán chi phí tổng tối thiểu để làm cho tất cả các phần tử trong  mỗi đoạn con liên tiếp có k phần tử, từ trái sang phải, bằng nhau.
Bạn có thể tăng hoặc giảm mỗi phần tử với chi phí x, trong đó x là sự chênh lệch giữa giá trị mới và giá trị ban đầu. Tổng chi phí là tổng của các chi phí này.
Input:
- Dòng đầu tiên chứa hai số nguyên n và k: số lượng phần tử và kích thước đoạn con.( 1 <= k <= n <= 2.10^5)
- Dòng 2 là n số nguyên xi ( 1 <= xi <= 10^9)

Dữ liệu đầu ra
In ra n-k+1 giá trị: các chi phí tối thiểu cho mỗi đoạn con.
*/
// link: 
/* ----------------- test case -----------------
Input
8 3
2 4 3 5 8 1 2 1
Output
2 2 5 7 7 1
Giải thích:
Đoạn con đầu tiên là 2 4 3, ta tăng giá trị của 2 lên 1 và giảm 4 đi 1 thì cả 3 sẽ đều có giá trị bằng 3, tốn chi phí là 2.
Đoạn con thứ 2 là 4 3 5 ta tăng 3 lên 1, giảm 5 đi 1, toorngt chi phí vẫn là 2.
Tương tự cho đến hết.
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
#define maxN 200005 //10^5
// init variables
ll n, k, balance, s1=0, s2=0;
ll a[maxN], temp[maxN];
mll l, r;
// function

// solve
void solve(){
    // name variables
    in_ab(n, k);
    for_i(i, 1, n) in_n(a[i]);
    if(k&1) balance=k/2+1;
    else balance=k/2;

    for_i(i, 1, k) temp[i]=a[i];
    sort(temp+1,temp+1+k);
    for_i(i, 1, balance) l.insert(temp[i]), s1+=temp[i];
    for_i(i, balance+1, k) r.insert(temp[i]), s2+=temp[i];
    auto z=l.end(); z--; ll med=*z;
    out_n((med * balance-s1) + (s2 - med * (k-balance)));
    out_n(' ');
    for_i(i, k+1, n){
        auto x=r.find(a[i-k]);
        if(x==r.end()) l.erase(l.find(a[i-k])), s1-=a[i-k];
        else r.erase(x), s2-=a[i-k];

        auto y=r.upper_bound(a[i]);
        if(y==r.begin()) l.insert(a[i]), s1+=a[i];
        else r.insert(a[i]), s2+=a[i];

        while(l.size()!=balance){
            if(l.size()<balance){
                auto xx=r.begin();
                s1+=*xx;
                s2-=*xx;
                l.insert(*xx);
                r.erase(xx);
            }
            else if(l.size()>balance){
                auto xx=l.end();
                xx--;
                s1-=*xx;
                s2+=*xx;
                r.insert(*xx);
                l.erase(xx);
            }
        }
        auto z=l.end(); z--; ll med=*z;
        out_n((med * balance-s1) + (s2 - med * (k-balance)));
        out_n(' ');
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