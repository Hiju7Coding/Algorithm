#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re0 return 0;

#define maxN1 100005
#define maxN2 200005
#define maxN3 1000005
#define INF 1e9
#define MOD 1000000007
#define DINT -1e9

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

// init variables

// function

// solve
void solve(){
    ll n, k;in_ab(n, k);
    vec a(n);ina_n(a, n);

    ll mx = DINT;
    deq dq;
    for_i(i, 0, n-1){
        while(!dq.emp() && dq.fr() < i-k) dq.pof(); // loai bo cac phan tu khong thuoc khoang k
        if(!dq.emp()) mx = max(mx, a[dq.fr()] - a[i]); // tinh max
        while(!dq.emp() && a[dq.bk()] <= a[i]) dq.pob(); // loai bo cac phan tu nho hon a[i]
        dq.pb(i);
    }
    out_n(mx);
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
Sau khi được trợ giúp từ các anh hào trên upcoder. Mai tự tin tiến vào vòng trong, lần này ban tổ chức chỉ yêu cầu Mai đập 2 hộp vẫn là thứ tự từ trái sang phải nhưng thứ tự giữa hai hộp không được vượt quá k đơn vị. Tiền thưởng Mai nhận được sẽ là hiệu của hộp đầu tiên và hộp thứ hai.
Input
Dòng đầu tiên gồm hai số n và k với ( 1 < k < n <= 106)
Dòng thứ hai gồm n số ai với (|ai| <= 106)
Output
Là một số nguyên duy nhất thể hiện phần thưởng lớn nhất của Mai nhận được
Ví dụ
Input
5 2
7 4 -4 -5 1
Output
11
Giải thích : Mai đập hộp 7 và -4 số tiền thưởng lớn nhất là 7 - (-4) = 11
Lưu ý Mai không thể đập hộp 7 trước rồi -5 sau vì khoảng cách hai hộp đã quá 2 đơn vị   
*/