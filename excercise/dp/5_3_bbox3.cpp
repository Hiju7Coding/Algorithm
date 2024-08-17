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
#define maxN 300005 //3*10^5
// init variables

// function

// solve
void solve(){
    ll n;in_n(n);vec a(n);ina_n(a, n);vec dp(n, 0);
    dp[0] = a[0];
    for_i(i, 1, n-1){
        dp[i] = a[i];
        for_d(j, i-1, 0){
            if(a[j] <= a[i]){
                dp[i] = max(dp[i], dp[j] + a[i]);
                break;
            }
        }
    }
    out_n(dp[n-1]);
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
Ở vòng trước sau khi đã nhờ vả các hảo thủ trên upcoder, với rất nhiều nỗ lực cuối cùng đã có một bạn duy nhất làm được. Nhưng lúc ấn vào bài thì Mai lại phát hiện họ đã để chế độ riêng tư V: 
Mai khóc thét, Mai đau đớn, Mai gục ngã rồi vung búa đập lung tung, cuối cùng Mai đã mang về một món nợ siêu to khổng lồ. 
Ban tổ chức rất hả hê nhưng để duy trì chương trình thì không thể biến người chơi thành con nợ (sau này ai dám chơi nữa). Nên cuối cùng họ tổ chức một vòng chơi mới mang tên Đập Nợ để hi vọng Mai có thể đập tan nợ nần sau vòng thi này. Thể lệ cuộc chơi như sau :

Vẫn là n chiếc hộp với những con số bí ẩn, nhưng Mai sẽ được quyền đập bao nhiêu hộp tùy thích, miễn hộp sau phải có giá trị lớn hơn hoặc bằng hộp trước, tất nhiên vẫn theo thứ tự từ trái sang phải và Mai muốn bắt đầu đập từ hộp nào cũng được.
Tổng giá trị các hộp chính là phần thưởng mà Mai nhận được.

Input:
Dòng 1 là số n thể hiện số lượng hộp ( 2 <= n <= 3*105)
Dòng hai là n số nguyên dương ai thể hiện cho giá trị của từng hộp (ai <= 3*105)

Output:
Một dòng duy nhất là phần thưởng lớn nhất Mai có thể nhận được.

Ví dụ
Input
10
2 7 3 5 3 8 8 5 7 7
Output
29

Giải thích: Mai sẽ phải đập các hộp 2 3 5 5 7 7 để có được phần thưởng lớn nhất
*/