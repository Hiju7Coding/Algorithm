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
Trong buổi lễ khai mạc kỳ thi Olympic Tin học sinh viên Việt Nam năm 2017, tại hội trường của trường Đại học Sư phạm Thành phố Hồ Chí Minh, Ban tổ chức đã chuẩn bị một hệ thống gồm n đèn để tạo hiệu ứng ánh sáng trong thời gian diễn ra buổi lễ. Các đèn đươc đánh chỉ số từ 1 đến n, mỗi đèn có 3 trạng thái, trạng thái sáng màu xanh hoặc sáng màu đỏ hoặc tắt. Ban đầu tất cả các đèn đều ở trạng thái tắt. Theo kịch bản sẽ có t lần thay đổi trạng thái của các đèn, lần thay đổi thứ k (k=1,2,…,t) sẽ thay đổi trạng thái của tất cả các đèn có chỉ số từ akđến bk (1≤ak≤bk≤n). Với một đèn khi được thay đổi trạng thái sẽ thay đổi theo nguyên tắc như sau: nếu đèn đang ở trạng thái tắt sẽ chuyển sang trạng thái sáng màu xanh, còn nếu đang ở trạng thái sáng màu xanh thì chuyển sang trạng thái sáng màu đỏ, nếu ở trạng thái sáng màu đỏ thì chuyển về trạng thái tắt.

Ví dụ, nếu hệ thống gồm có 5 đèn và ban đầu đều ở trạng thái tắt, kịch bản gồm 3 thay đổi trạng thái các đèn, lần 1 thay đổi trạng thái các đèn có chỉ số từ 2 đến 4, lần 2 và lần 3 đều thay đổi trạng thái các đèn có chỉ số từ 3 đến 5. Khi đó, sau 3 lần thay đổi trạng cái của 5 đèn lần lượt là: tắt, sáng màu xanh, tắt, tắt, sáng màu đỏ.

Kết thúc buổi lễ, Ban tổ chức muốn thống kê số đèn ở trạng thái tắt sau t lần thay đổi trạng thái của các đèn theo kịch bản.

Yêu cầu: Cho biết kịch bản gồm t lần thay đổi trạng thái của các đèn, lần thay đổi thứ k (k=1,2,…,t) sẽ thay đổi trạng thái của tất cả các đèn có chỉ số từ ak đến bk. Hãy cho biết, khi kết thúc buổi lễ thì có bao nhiêu đèn ở trạng thái tắt.

Dữ liệu:
Dòng đầu chứa hai số nguyên dương n,t
Dòng thứ k trong t dòng tiếp theo chứa hai số nguyên dương ak, bk (1≤ak≤bk≤n) .
Kết quả:  xuất ra một số nguyên là số lượng đèn tắt khi buổi lễ kết thúc.
Chú ý:
Có 25% số test có n≤106;t=1;
Có 25% số test khác có n≤103; t≤105;
Có 40% số test khác có n≤106; t≤105;
Có 10% số test còn lại có n≤109; t≤105
*/
// link: 
/* ----------------- test case -----------------
case 1:
input:
5 3
2 4
3 5
3 5
output:
3
case 2:
input:
1000 1
2 999
output:
2
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
    ll n, t;in_ab(n, t);
    map<ll, int> a;
    while(t--) {
        int l, r;
        cin >> l>> r;
        a[l]++, a[r+1]--;
    }
    ll off=0, cur=0, prev=1;
    for(auto it:a) {
        ll pos=it.first;
        if(cur % 3==0) off+=(pos-prev);
        cur+=it.second;
        prev=pos;
    }
    if(cur%3==0) off += (n-prev+1);
    out_n(off);
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