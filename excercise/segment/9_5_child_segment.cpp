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
Cho bạn n đoạn số nguyên liên tiếp có dạng [a,b] (b >= a). Nhiệm vụ của bạn là xác định xem đoạn [a,b] có chứa hoặc bị chứa bởi đoạn nào khác hay không.
Lưu ý: Đoạn [a,b] được gọi là chứa đoạn [c,d] nếu a <= c và b >= d.
Input: 
- Dòng 1: số nguyên dương n ( n <= 2.105).
- N dòng tiếp theo là các cặp số nguyên dương a, b đại diện cho đoạn [a,b]
Lưu ý: Không có đoạn [a,b] nào xuất hiện 2 lần trong Input.
Output:
Đầu tiên, in ra một dòng mô tả cho mỗi đoạn (theo thứ tự đầu vào) số lượng đoạn con mà đoạn đó chứa.
Sau đó, in ra một dòng mô tả cho mỗi đoạn (theo thứ tự đầu vào) số lượng các đoạn có chứa đoạn đó.
*/
/* ----------------- test case -----------------
Input
4
1 6
2 4
4 8
3 6
Output
2 0 0 0
0 1 0 1
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
#define maxN 200005 //10^5
// init variables
struct node{
    ll l, r, indx;
    bool operator<(const node &x)const{
        if(l==x.l) return r>x.r;
        return l<x.l;
    }
};
ll n, m=0;
ll st[maxN<<2];
node a[maxN], res[maxN];
set<ll>se;
unordered_map<ll,ll> mpx;
// function
void update(ll id, ll l, ll r, ll pos){
    if(pos<l || pos>r) return;
    if(l==r) return st[id]++, void();
    ll m=(l+r)>>1;
    update(id<<1,l,m,pos);
    update(id<<1|1,m+1,r,pos);
    st[id]=st[id<<1]+st[id<<1|1];
}
ll get(ll id, ll l, ll r, ll u, ll v){
    if(v<l || u>r) return 0;
    if(u<=l && r<=v) return st[id];
    ll m=(l+r)>>1;
    return get(id<<1,l,m,u,v)+get(id<<1|1,m+1,r,u,v);
}
// solve
void solve(){
    // name variables
    cin >> n;
    for_i(i, 0, n-1){
        cin >> a[i].l >> a[i].r;
        a[i].indx=i;
        se.insert(a[i].r);
    }
    for(auto &x:se) mpx[x]=++m;
    sort(a,a+n);
    for_d(i,n-1,0){
        ll x=mpx[a[i].r];
        res[a[i].indx].l=get(1,1,m,1,x);
        update(1,1,m,x);
    }
    memset(st,0,sizeof(st));
    for_i(i,0,n-1){
        ll x=mpx[a[i].r];
        res[a[i].indx].r=get(1,1,m,x,m);
        update(1,1,m,x);
    }
    for_i(i,0,n-1) cout << res[i].l << ' '; el;
    for_i(i,0,n-1) cout << res[i].r << ' '; el;
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