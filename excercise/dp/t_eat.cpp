#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re0 return 0;

#define max_n 200005
#define INF 1e9
#define MOD 1000000007

#define db double
#define ll long long
#define ull unsigned long long

#define el '\n'

#define fi first
#define se second

#define pb push_back
#define mp make_pair

#define sz(x) (int)x.size()
#define sz_str(s) s.length()
#define all(x) x.begin(), x.end()
#define for_i(i, a, b) for (ll i = a; i <= b; i++)
#define for_d(i, a, b) for (ll i = a; i >= b; i--)
#define whl(t) while(t--)

#define in_n(n) ll n;cin >> n;
#define input(a, n) for_i(i, 0, n-1) cin >> a[i];
#define input_n(a, n, m) for_i(i, 0, n-1) for_i(j, 0, m-1) cin >> a[i][j];

#define out_n(n) cout << n << el;
#define out_ab(a, b) cout << a << ' ' << b << el;
#define output(a, n) for_i(i, 0, n-1) cout << a[i] << ' ';
#define output_n(a, n, m) for_i(i, 0, n-1) {output(a[i], m); cout << el;}

#define vec vector<ll>
#define mus multiset<ll>
#define mus_p multiset<pair<ll, ll>>

using namespace std;

int main() {
    fast
    in_n(n)
    int a[n], b[n], c[n];
    input(a, n)
    input(b, n)
    input(c, n)

    ll  dp1[n], dp2[n], dp3[n];
    dp1[0] = a[0];
    dp2[0] = b[0];
    dp3[0] = c[0];
    for_i(i, 1, n-1) {
        dp1[i] = a[i] + max(dp2[i-1], dp3[i-1]);
        dp2[i] = b[i] + max(dp1[i-1], dp3[i-1]);
        dp3[i] = c[i] + max(dp2[i-1], dp1[i-1]);
    }
    cout << max({dp1[n-1], dp2[n-1], dp3[n-1]});
    re0
}
/*
Trà Mi của khoa Hóa K43 đại học Sư phạm là một cô gái xinh đẹp, tăng động và có phần bệnh hoạn hic :( . 
Để duy trì thân hình siêu mẫu hoàn mỹ của mình, cô nàng quyết định sẽ tuân theo chế độ ăn kiêng nghiêm ngặt. 
Cụ thể, Mi chỉ ăn ba món chính là
1. cơm sườn bì chả trứng
2. bún bò Huế nhiều chả nhiều gân ít nước không lấy bún (bún nhiều carb xấu mà Mi đang theo low-carb)
3. khoai laq nướq
Mi có kế hoạch mỗi ngày trong N ngày tới sẽ chỉ ăn một trong ba món chính, và cô cũng biết được độ ngon miệng nếu ăn món thứ i vào ngày thứ j sẽ là Ai,j. 
Đồng thời, vì biết oppa Ares ở nơi đất khách quê người xa xôi lạnh lẽo đang thèm đồ ăn Việt Nam, cô bé có tâm nhất quả đất quyết định mỗi ngày sẽ seo phì với đồ ăn ngon và gửi cho anh ấy.
Đương nhiên điều này sẽ không còn thú vị nếu như cô gửi hình cùng một món ăn trong hai ngày liên tiếp (ăn cùng một món trong hai ngày cũng rất là ngán :< ). 
Các bạn hãy giúp cô nàng tính toán tổng độ ngon miệng tối đa có thể đạt được trong N ngày nếu không ăn món nào trong hai ngày liên tiếp là bao nhiêu nhé.

Input

- Dòng đầu gồm số nguyên N là số ngày, 1 ≤ N ≤ 105
- 3 dòng sau, dòng thứ i gồm N số nguyên, số thứ j là Ai,j (1 ≤ Ai,j ≤ 109)

Ouput

- Một dòng duy nhất là tổng độ ngon miệng tối đa đạt được sau N ngày.

 
Sample Input
3
3  5  1
2  6  8
1  6  7
Sample Output
17

Giải thích: ngày 1 ăn cơm sườn, ngày 2 ăn khoai lang, ngày 3 ăn bún bò Huế sẽ cho tổng độ ngon miệng tối đa = 3 + 6 + 8 = 17
*/