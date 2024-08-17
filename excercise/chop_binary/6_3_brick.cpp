/*
Có n viên gạch với kích thước đáy tương ứng. Mỗi khi có hai viên gạch xếp chồng lên nhau, viên phía trên phải nhỏ hơn viên phía dưới. Bạn phải xử lý các viên gạch theo thứ tự đã cho. Bạn có thể luôn đặt viên gạch lên đỉnh của một tòa tháp hiện có, hoặc bắt đầu một tòa tháp mới. Số lượng tòa tháp ít nhất có thể là bao nhiêu?
Input:
- Dòng 1: gồm một số nguyên dương n ( 1 <= n <= 2.105).
- Dòng 2 gồm n số nguyên dương ai ( 1 <= ai <= 109).
Output:
Một dòng duy nhất là đáp án của bài toán.
Ví dụ:

Input
5
3 8 2 1 5
Output
2

Giải thích:
Ta ghép các mảnh 3 2 1 thành 1 tòa tháp. 8 5 thành một tòa nữa.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int min_tow(int n, vector<ll>& brk) {
    vector<ll> tow;
    for (ll b : brk) {
        auto pos = upper_bound(tow.begin(), tow.end(), b);
        if (pos != tow.end()) {
            *pos = b;
        } else {
            tow.push_back(b);
        }
    }
    return tow.size();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << min_tow(n, a);
    return 0;
}