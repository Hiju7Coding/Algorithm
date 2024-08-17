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

#define el '\n'
#define fi first
#define se second

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
ll n;
// function

// solve
void solve(){
    in_n(n);vec a(n);ina_n(a, n);
    ll res = DINT;
    ll max1 = DINT, max2 = DINT, max3 = DINT;
    vec dp(n, 0),dp1(n, 0),dp2(n, 0);

    dp[0] = a[0];
    dp1[1] = a[0]+a[1];dp1[2] = max(dp[1], a[1]+a[2]);
    dp2[2] = a[0]+a[1]-a[2];

    for_i(i,1,n-1) dp[i]=max(dp[i-1],a[i]);
    for_i(i,2,n-1) dp1[i]=max(dp1[i-1],dp[i-1]+a[i]);
    for_i(i,3,n-1) dp2[i]=max(dp2[i-1],dp1[i-1]-a[i]);
    
    cout<<dp2[n-1]<<el;
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
Vì rất mê mẩn những thứ bất ngờ nên Mai đã tham gia một game show đập hộp nhận quà. Thể lệ cuộc chơi như sau :
Có n hộp chứa các số nguyên ngẫu nhiên.
Mai sẽ chọn 3 hộp bất kỳ theo thứ tự từ trái sang phải và đập chúng. Mai sẽ nhận được phần thưởng là tổng giá trị của hai hộp đầu tiên trừ đi giá trị của hộp cuối cùng.
Vì học CNTT rất giỏi nên Mai sớm đã hack được vào hệ thống trò chơi và biết trước được con số trong từng hộp. Nhưng vì làm bài tập trên upcoder quá nhiều nên Mai bị lú ngang và không biết phải đập thế nào để được nhiều tiền nhất. Các bạn hãy giúp Mai nhé!

Input :
Dòng 1 là một số nguyên n thể hiện số hộp quà (3 <= n <= 106)
Dòng 2 là n số nguyên ai đại diện cho chỉ số cho mỗi hộp ( |ai| <= 106)
Output:
Một số nguyên duy nhất là phần thưởng lớn nhất Mai nhận được. (Đôi lúc Mai có thể mang một khoản nợ về nhà)

Ví dụ:
Input
5
1 -2 4 -7 3 
Output
12

Giải thích : Mai sẽ đập các hộp 1 4 và -7 phần thưởng lớn nhất sẽ là 1 + 4 - (-7) = 12
Lưu ý : không thể chọn hộp 4 3 làm 2 hộp đầu tiên và -7 là hộp cuối cùng vì phải tuân thủ đúng thứ tự từ trái sang phải. 
*/