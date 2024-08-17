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
Cho n ngôi nhà mới xây cất được đánh số từ 1 đến n. Có m cặp nhà có đường đi và cách nhau một khoảng cho trước. Những cặp nhà không được đề cập thì xem như khoảng cách rất xa hoặc chưa có đường đi. Những cặp nhà được gắn thiết bị kết nối thì được xem là chung một làng. (lưu ý dù có đường đi nhưng không được gắn thiết bị kết nối thì vẫn không chung làng)
Cho 3 loại truy vấn như sau:
- Truy vấn loại 1 có dạng : 1 u v đại diện cho việc kết nối hai ngôi nhà u, v thành một làng.
- Truy vấn loại 2 có dạng : 2 u yêu cầu xuất ra số ngôi nhà trong ngôi làng có chứa nhà u.
- Truy vấn loại 3 có dạng : 3 u yêu cầu xuất ra khoảng cách gần nhất với ngôi làng có chứa nhà u và làng lân cận. Trong đó khoảng cách giữa hai làng được tính bằng khoảng cách bé nhất giữa hai ngôi nhà bất kỳ trong 2 làng.
Input : 
- Dòng 1 : 3 số nguyên dương n, m và q đại diện cho số lượng ngôi nhà và số truy vấn ( n,m, q <= 2.105 ).
- m dòng tiếp theo có định dạng u,v,x. Với u,v là chỉ số ngôi nhà, x là khoảng cách giữa 2 nhà.
(dữ liệu đảm bảo không có 2 cặp u v trùng nhau)
- q dòng tiếp theo là các truy vấn theo định dạng 1,2,3. 
Output:
In ra màn hình kết quả của các truy vấn loại 2 và 3
Ví dụ:

Input
6 6 6

1 2 5

2 5 11

1 6 3

2 3 2

1 3 5

4 6 10



1 1 2

3 1

1 4 2

3 4

1 3 4

3 2

Output
2

2

3
*/