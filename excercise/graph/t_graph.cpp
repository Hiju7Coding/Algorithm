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
Một mạng giao thông gồm N nút giao thông
- có M đường hai chiều nối một số cặp nút,
- thông tin về một đường gồm ba số nguyên dương u,v là tên hai nút đầu mút của đường, 
- l là độ dài đoạn đường đó. Biết rằng hai nút giao thông bất kì có không quá 1 đường hai chiều nhận chúng làm hai đầu mút.

Cho hai nút giao thông s và f. hãy tìm hai đường đi nối giữa s với f sao cho 
- hai trên hai đường không có cạnh nào được đi qua hai lần và tổng độ dài đường đi là nhỏ nhất.

Input
Dòng đầu ghi N,M(N <=100)
Dòng thứ 2 ghi hai số s,f
M dòng tiếp theo, mỗi dòng mô tả một đường gồm ba số nguyên dương u,v,l
Output
Dòng đầu ghi T là tổng độ dài nhỏ nhất tìm được hoặc -1 nếu không tìm được.
Nếu tìm được, hai dòng sau, mỗi dòng mô tả một đường đi gồm: 
- số đầu là số nút trên đường đi này 
- tiếp theo là dãy các nút trên đường đi bắt đầu từ s, kết thúc tại f 
Giới hạn
phạm vi tính toán là số nguyên 32 bit có dấu
*/
// link: https://oj.vnoi.info/problem/hiway
/* ----------------- test case -----------------
Input
5 8
1 5
1 2 1
1 4 8
2 3 5
2 4 1
3 5 1
4 3 8
4 5 1
1 3 1
Output
5
3 1 3 5
4 1 2 4 5
*/
/*
- tìm dijkstra lần 1, sau khi đi qua cạnh thì đổi dấu trọng số của cạnh
- tìm dijkstra lần 2, sau khi đi qua cạnh thì đổi dấu trọng số của cạnh
- tìm 2 đường đi có tổng trọng số của 2 đường đi là nhỏ nhất
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
//#define maxN 100005 //10^5
// init variables
struct edge {
    ll to, wt;
};
struct node {
    ll vt, dst;
    bool operator>(const node& other) const {
        return dst > other.dst;
    }
};
vector<vector<edge>> graph;
vll dst1, dst2;
vll pr1, pr2;
// function
void dijkstra(ll s,ll n) {
    dst.assign(sz(dst), INF);
    pr.assign(sz(pr), -1);
    priority_queue<node, vector<node>, greater<node>> pq;
    dst[s] = 0;
    pq.push({s, 0});
    while (!pq.empty()) {
        node u = pq.top(); pq.pop();
        for (edge e : graph[u.vt]) {
            if (dst[e.to] > u.dst + e.wt) {
                dst[e.to] = u.dst + e.wt;
                pr[e.to] = u.vt;
                pq.push({e.to, dst[e.to]});
                e.wt = -e.wt;
            }
        }
    }
}
void modify_path(int end) {
    int u = end;
    while (parent[u] != -1) {
        int v = parent[u];
        for (Edge& edge : graph[u]) {
            if (edge.to == v) {
                edge.weight = INT_MAX; // Mark edge as used
                break;
            }
        }
        for (Edge& edge : graph[v]) {
            if (edge.to == u) {
                edge.weight = INT_MAX; // Mark edge as used
                break;
            }
        }
        u = v;
    }
}
// solve
void solve(){
    // name variables
    ll n,m;in_ab(n,m);
    graph.rsz(n+1);
    dst1.rsz(n+1, INF);
    dst2.rsz(n+1, INF);
    pr1.rsz(n+1, -1);
    pr2.rsz(n+1, -1);
    for_i(i, 1, m) {
        ll u,v,w;in_ab(u,v);in_n(w);
        graph[u].pb({v, w});
        graph[v].pb({u, w});
    }
    ll s = 1,e = n;
    dijkstra(s, dst1, pr1);
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