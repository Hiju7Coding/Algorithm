#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re0 return 0;


#define INF 1e9
#define DINT -1e9
#define MOD 1000000007


#define db double
#define ll long long
#define ull unsigned long long
#define vec vector<ll>
#define mus multiset<ll>
#define pll pair<ll, ll>
#define mus_p multiset<pll>
#define deq deque<ll>

#define el '\n'
#define fi first
#define se second
#define fr front
#define bk back
#define bg begin
#define ed end

#define emp empty
#define pob pop_back
#define pof pop_front
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound

#define set_f(a) fixed << setprecision(a)
#define sz(x) x.size()
#define sz_str(s) s.length()
#define mx_ele(x) *max_element(all(x))

#define all(x) x.begin(), x.end()

#define for_i(i, a, b) for (ll i = a; i <= b; i++)
#define for_d(i, a, b) for (ll i = a; i >= b; i--)
#define whl(t) while(t--)

#define in_n(n) cin >> n;
#define in_ab(a, b) cin >> a >> b;
#define ms(a, x) memset(a, x, sizeof(a));
#define ina_n(a, n) for_i(i, 0, n-1) cin >> a[i];
#define ina_nm(a, n, m) for_i(i, 0, n-1) for_i(j, 0, m-1) cin >> a[i][j];

#define out_n(n) cout << n << el;
#define out_ab(a, b) cout << a << ' ' << b << el;
#define output_i(a, n) for_i(i, 0, n-1) cout << a[i] << ' ';
#define output_d(a, n) for_d(i, 0, n-1) cout << a[i] << ' ';
#define output_n(a, n, m) for_i(i, 0, n-1) {output(a[i], m); cout << el;}

using namespace std;
//#define maxN 100005 //10^5
// init variables

// function

// solve
void solve(){
    ll n;in_n(n);vec a(n);ina_n(a, n);
    stack<ll> st;
    vec res(n, 0);
    for_i(i, 0, n-1){
        while(!st.empty() && a[st.top()] >= a[i]) st.pop();
        if(!st.empty()) res[i] = st.top() + 1;
        st.push(i);
    }
    output_i(res, n);
}
int main() {
    fast
    if (fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    solve();
    re0;
}
/*
Cho một mảng gồm n số nguyên, nhiệm vụ của bạn là tìm cho mỗi vị trí trong mảng vị trí gần nhất ở bên trái có giá trị nhỏ hơn.
Input:
- Dòng 1: Một số nguyên dương n đại diện cho số lượng số nguyên ( 1 <= n <= 2.105).
- Dòng 2: Gồm n số nguyên dương ai (1 <= ai <= 109).
Output:
n số nguyên đại diện cho vị trí của số nhỏ hơn gần nhất bên trái. Nếu không có thì in số 0.
Lưu ý: vị trí được đánh số từ 1.
Ví dụ:
Input
8
2 5 1 4 8 3 2 5
Output
0 1 0 3 4 3 3 7
*/