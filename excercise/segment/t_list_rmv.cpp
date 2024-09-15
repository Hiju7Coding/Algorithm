#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
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
You are given a list consisting of n integers. Your task is to remove elements from the list at given positions, and report the removed elements.
Input
The first input line has an integer n: the initial size of the list. During the process, the elements are numbered 1,2,\dots,k where k is the current size of the list.
The second line has n integers x_1,x_2,\dots,x_n: the contents of the list.
The last line has n integers p_1,p_2,\dots,p_n: the positions of the elements to be removed.
Output
Print the elements in the order they are removed.

1 \le n \le 2 \cdot 10^5
1 \le x_i \le 10^9
1 \le p_i \le n-i+1
*/
// link: https://cses.fi/problemset/task/1749
/* ----------------- test case -----------------
Input:
5
2 6 1 4 2
3 1 3 1 1

Output:
1 2 2 6 4

Explanation: The contents of the list are [2,6,1,4,2], [2,6,4,2], [6,4,2], [6,4], [4] and [].
*/
/* ------------------- code --------------------

*/
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
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
// function
void update(ll id, ll l, ll r, ll pos){ // update giá trị của st[id] tại vị trí pos
    if(pos<l || pos>r) return; 
    if(l==r) return st[id]++, void(); 
    ll m=(l+r)>>1; 
    update(id<<1,l,m,pos); 
    update(id<<1|1,m+1,r,pos); 
    st[id]=st[id<<1]+st[id<<1|1]; 
}
ll get(ll id, ll l, ll r, ll pos){ // 
    if(l==r) return l;
    ll m=(l+r)>>1;
    if(st[id<<1]>=pos) return get(id<<1,l,m,pos);
    return get(id<<1|1,m+1,r,pos-st[id<<1]);
}
// solve
void solve(){
    // name variables
    ll n;in_n(n)
    ll a[n], b[n];
    ina_n(a, n)
    ina_n(b, n)
    // segment tree
    for_i(i, 1, n) update(1, 1, n, i);
    for_i(i, 0, n-1){
        ll x = get(1, 1, n, b[i]);
        cout << a[x-1] << ' ';
        update(1, 1, n, x); // remove element
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