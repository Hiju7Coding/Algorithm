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
Có n em nhỏ được đánh số từ 1 đến n xếp thành vòng tròn. Mỗi em mang một số kẹo nhất định. Khi bắt đầu em số 1 sẽ đứng ở hướng 12h.
Có 3 loại truy vấn như sau.
- Loại 1 có dạng 1 k . Các em nhỏ sẽ xoay theo theo chiều kim đồng hồ k đơn vị. ( k <= 106).
- Loại 2 có dạng 2 a b x . Em nhỏ nào mang số kẹo ít nhất trong khoảng từ a đến b sẽ được thay thế bằng x viên kẹo.
  Nếu có nhiều em nhỏ thì chọn em có chỉ số nhỏ nhất. (1 <= a <= b <= n, 0 <= x <= 106)
- Loại 3 có dạng 3 a b. In ra màn hình tổng số viên kẹo của các em nhỏ trong đoạn từ a đến b (1 <= a <= b <= n)
Input:
Dòng 1: Gồm 2 số nguyên dương n và q đại diện cho số lượng em nhỏ và số truy vấn ( 1 <= n,q <= 105).
Dòng 2: Gồm n số nguyên dương a (a <= 106).
Q dòng tiếp theo mỗi dòng là một trong ba loại truy vấn.
Output
Với mỗi truy vấn loại 3 hãy in ra màn hình đáp án trên từng dòng.
Giới hạn:
20% subtask có n,q <= 20
20% subtask có n,q <= 1000
60% còn lại không giới hạn gì thêm.
*/
// link: 
/* ----------------- test case -----------------
Input
6 4
3 4 2 1 6 9
3 2 4
1 1
2 2 4 5
3 2 4
Output
7
12
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
#define maxN 100005 //10^5
// init variables
struct Node {
    ll min_val, sum;
    int min_index;
    Node(ll val = 0, int idx = 0) : min_val(val), min_index(idx), sum(val) {}
};

Node merge(const Node& left, const Node& right) {
    Node result;
    if (left.min_val <= right.min_val) {
        result.min_val = left.min_val;
        result.min_index = left.min_index;
    } else {
        result.min_val = right.min_val;
        result.min_index = right.min_index;
    }
    result.sum = left.sum + right.sum;
    return result;
}

vll a;
Node tree[4 * maxN];
ll n, q;
// function
void build(int node, int start, int end) {
    if (start == end) {
        tree[node] = Node(a[start], start);
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
}

void update(int node, int start, int end, int idx, ll val) {
    if (start == end) {
        tree[node] = Node(val, idx);
        a[idx] = val;
        return;
    }
    int mid = (start + end) / 2;
    if (idx <= mid) update(2 * node, start, mid, idx, val);
    else update(2 * node + 1, mid + 1, end, idx, val);
    tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
}

Node query(int node, int start, int end, int l, int r) {
    if (r < start || end < l) return Node();
    if (l <= start && end <= r) return tree[node];
    int mid = (start + end) / 2;
    return merge(query(2 * node, start, mid, l, r), query(2 * node + 1, mid + 1, end, l, r));
}
// solve
void solve() {
    in_ab(n, q);
    a.rsz(n); ina_n(a, n);
    build(1, 0, n - 1);
    ll rot = 0;
    whl(q) {
        int type; in_n(type);
        if (type == 1) {
            ll k; in_n(k);
            rot = (rot + k) % n;
        } else if (type == 2) {
            ll l, r, x; in_ab(l, r); in_n(x);
            l = (l + rot - 1) % n;
            r = (r + rot - 1) % n;
            if (l <= r) {
                Node res = query(1, 0, n - 1, l, r);
                update(1, 0, n - 1, res.min_index, x);
            } else {
                Node res1 = query(1, 0, n - 1, l, n - 1);
                Node res2 = query(1, 0, n - 1, 0, r);
                if (res1.min_val <= res2.min_val) {
                    update(1, 0, n - 1, res1.min_index, x);
                } else {
                    update(1, 0, n - 1, res2.min_index, x);
                }
            }
        } else {
            ll l, r; in_ab(l, r);
            l = (l + rot - 1) % n;
            r = (r + rot - 1) % n;
            ll res = 0;
            if (l <= r) {
                res = query(1, 0, n - 1, l, r).sum;
            } else {
                res = query(1, 0, n - 1, l, n - 1).sum + query(1, 0, n - 1, 0, r).sum;
            }
            out_n(res); oel;
        }
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