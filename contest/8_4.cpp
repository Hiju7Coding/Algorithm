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
Hai chú gấu con đã tìm được trong rừng hai miếng bánh có khối lượng tương ứng là a và b gam (g), với a và b là hai số nguyên. Hai chú gấu tham lam đến nỗi muốn chuẩn bị đánh nhau để tranh phần bánh nhiều hơn.
Một con cáo đi đến và nói: "Các chú hãy đợi đấy, tôi sẽ giúp các chú chia các miếng bánh bằng nhau!", "Đồng ý, nhưng làm sao chia được?" - một chú gấu hào hứng nói.
"Rất đơn giản, nếu khối lượng miếng bánh nào đó được chia đều thành hai phần thì thôi sẽ ăn một phần. Nếu khối lượng miếng bánh được chia đều làm ba thì tôi sẽ ăn hai phần ba, còn nếu chia đều làm năm thì tôi sẽ ăn bốn phần năm. Như vậy tôi sẽ ăn một ít và hai miếng bánh sẽ bằng nhau" - con cáo nói.
Hai chú gấu nghi ngờ con cáo chơi khăm mình nhưng lúc này chúng không thể tự chia hai miếng bánh bằng nhau được nên đành phải đồng ý với lời đề nghị của cáo nhưng với một điều kiện: Cáo phải chia sao cho hai miếng bánh bằng nhau nhanh nhất và khối lượng của chúng phải luôn là số nguyên.

Yêu cầu: Bạn hãy tìm số ít nhất các thao tác đã mô tả ở trên sao cho cáo có thể chia thành hai miếng phô mai bằng nhau.

Input: Gồm một dòng duy nhất ghi hai số nguyên a và b cách nhau một khoảng trắng (1 <= a, b <= 10^9).

Output:  Gồm một dòng duy nhất ghi một số cho biết:
- Trường hợp con cáo nói dối và không thể chia đều được, ghi số -1
- Ngược lại, ghi số thao tác ít nhất. Trong trường hợp hai miếng bánh ban đầu bằng nhau thì ghi số 0.
*/
// link: 
/* ----------------- test case -----------------
Input
15 20
Output
3
Giải thích:
Lần 1: Cáo chia miếng 15g thành 3 phần, mỗi phần 5g. Cáo ăn 2 phần, miếng còn lại bằng 5g.
Lần 2: Cáo chia miếng 20g thành 2 phần, mỗi phần 10g. Cáo ăn 1 phần, miếng còn lại bằng 10g.
Lần 3: Cáo chia tiếp miếng 10g thành 2 phần, mỗi phần 5g. Cáo ăn 1 phần, miếng còn lại bằng 5g.
Kết quả sau 3 lần chia Cáo có 2 miếng bằng nhau và bằng 5g.
Không có cách chia nào khác nhanh hơn 3 lần chia nên kết quả là 3.
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
//#define maxN 100005 //10^5
// init variables

// function
ll cnt(ll n){
    ll cnt = 0;
    while (n % 2 == 0) {
        n /= 2;
        cnt++;
    }
    while (n % 3 == 0) {
        n /= 3;
        cnt++;
    }
    while (n % 5 == 0) {
        n /= 5;
        cnt++;
    }
    return (n == 1) ? cnt : -1;
}
// solve
void solve(){
    // name variables
    ll a, b;in_ab(a, b);
    if(a==b) {
        out_n(0);
        oel;
    }
    ll  gcd_ab = __gcd(a, b);
    if(gcd_ab == 1) {
        out_n(-1);
        oel;
    }
    a /= gcd_ab;
    b /= gcd_ab;
    ll opa =cnt(a);
    ll opb =cnt(b); 
    if(opa == -1 || opb == -1) {
        out_n(-1);
        oel;
    }
    else{
        out_n(opa + opb);
        oel;
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