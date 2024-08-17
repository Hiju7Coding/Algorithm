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
#define maxN 2000005 //2*10^6
// init variables
vec bit(maxN);
// function

void update(int i, int v){
    for (; i < maxN; i += i & -i)
        bit[i] += v;
}

int get(int i){
    int res = 0;
    for (; i > 0; i -= i & -i)
        res += bit[i];
    return res;
}

int Bs(int k)
{
    int lo = 1, hi = maxN - 1;
    while (lo < hi)
    {
        int mid = (lo + hi) >> 1;
        if (get(mid) < k) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}
// solve
void solve(){
    ll n;in_n(n);

    for (int i = 1; i <= n; i++){
        update(i, 1);
    }
    

    int pos = 0;
    for_d(i, n, 1){
        pos = (pos + 2) % i;
        
        if (pos == 0) pos = i;

        ll idx = Bs(pos);
        cout << idx << " ";

        update(idx, -1);
        pos--;
    }
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
Có n đứa trẻ được đánh số từ 1 đến n xếp vòng tròn và được chia kẹo, mỗi đứa trẻ sẽ đếm 1, 2 và lặp lại theo vòng tròn. Đứa đếm số 2 sẽ được chia kẹo trước và bước ra khỏi vòng tròn. Đứa số 1 sẽ đếm đầu tiên. Vậy thứ tự của các đứa trẻ được chia kẹo sẽ như thế nào ?
Input: Một dòng là số n ( 1 <= n <= 2.105).
Output: n số nguyên cách nhau bởi khoảng trắng là thứ tự nhận kẹo của các đứa trẻ.Ví dụ:

Input
7
Output
2 4 6 1 5 3 7
Giải thích: Đứa trẻ số 1 đếm 1, đứa số 2 đếm 2 và số 2 được nhận kẹo sau đó bước ra khỏi vòng tròn, đứa số 3 tiếp tục đếm 1, đứa số 4 đếm 2 và được nhận kẹo, tương tự cho đứa số 6. Vòng tròn lúc này sẽ còn 1 3 5 7. Đứa số 7 lại đếm 1 và đứa số 1 theo vòng tròn sẽ đếm 2 rồi nhận được kẹo. Tương tự cho đến hết.
*/