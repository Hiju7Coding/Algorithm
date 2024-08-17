/*
Một con đom đóm bay vào một cái hang đầy những chướng ngại vật gồm: măng đá (nhô lên từ mặt đất) và nhũ đá (đâm xuống từ trần hang). Hang này dài N đơn vị (chẵn) và cao H đơn vị. Khi vào hang, vật cản đầu tiên là măng đá, sau đó là nhũ đã, rồi lại đến măng đá,...cứ thế thay phiên nhau.

Bạn được cho chiều dài N, chiều cao H và kích thước của tất cả các chướng ngại vật. Hãy xác định số chướng ngại vật tối thiểu mà con đom đóm cần phá để thoát khỏi hang, và có bao nhiêu cách chọn độ cao khác nhau đưa đến kết quả đó.

Input Dòng đầu gồm các số nguyên dương N < 210^5 và H < 210^5, là chiều dài và chiều cao của hang. Dòng thứ hai gồm N số nguyên dương h1,h2,...hnlà chiều cao các chướng ngại vật của hang. Lưu ý cách sắp xếp chướng ngại vật ở các hình vẽ trên. Output Gồm 2 số nguyên cách nhau là số chướng ngại vật ít nhất cần phá và số cách chọn khác nhau để có được kết quả đó.

Giới hạn Có 30% số test tương ứng với 30% số điểm có N X H < 10^6, số test còn lại không có giới hạn gì thêm. Sample Input 6 7 1 5 3 3 5 1 Sample Output 2 3
*/

#include <bits/stdc++.h>

#define ll long long
#define maxn 200005
#define H 500001
using namespace std;

ll f[H], g[H];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, h;
    cin >> n >> h;
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        if (i & 1) f[x]++;
        else g[x]++;
    }
    for (ll i=h-1; i>=0; i--) {
        f[i] += f[i + 1];
        g[i] += g[i + 1];
    }
    ll res = n + 1, count = 0;
    for (ll i= 1; i<=h; i++) {
        ll c = f[i] + g[h - i + 1];
        if (res == c) count++;
        else if (res > c) {
            res = c;
            count = 1;
        }
    }
    cout << res << ' ' << count;
    return 0;
}