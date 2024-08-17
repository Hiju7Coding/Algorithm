/*
Có nhiều mỏ vàng khá lớn, mỗi người thợ đào mỏ sẽ được thuê mỏ trong một khoảng thời gian nhất định để khai thác. Tuy nhiên để tối đa hóa lợi nhuận công ty luôn hạn chế số mỏ đang được khai thác về mức thấp nhất. Nhiệm vụ của bạn là tính toán xem cần tối thiểu bao nhiêu mỏ vàng để luôn đáp ứng được nhu cầu thuê mỏ của các thợ nếu bạn biết trước danh sách về lịch trình khai thác.
Input:
Dòng 1: Một số nguyên dương n (1 <= n <= 2.105).
n dòng tiếp theo mỗi dòng chứa 2 số nguyên a,b đại diện cho ngày đến và ngày sắp đi của thợ mỏ (thợ mỏ sẽ đi ở ngày b + 1) ( 1 <= a <= b <= 109).
Output:
Số lượng mỏ tối thiểu đáp ứng yêu cầu các thợ.
Ví dụ:

Input
3

1 2

2 4

4 4
Output
2



Giải thích. Mỏ số 1 cho thợ số 1 đào, mỏ số 2 cho thợ số 2 đào.khi thợ số 3 đến thì thợ số 1 đã đào xong nên mỏ số 1 lại cho thợ số 3 đào.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int miner(int n, vector<pair<int, int>> sch) {
    vector<pair<int, char>> e;
    
    for (const auto& hm : sch) {
        int a = hm.first;
        int b = hm.second;
        e.push_back({a, 's'});
        e.push_back({b + 1, 'e'});
    }
    
    sort(e.begin(), e.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first < b.first;
    });
    
    int stat = 0;
    int act = 0;
    
    for (const auto& event : e) {
        if (event.second == 's') {
            stat++;
            act = max(act, stat);
        } else {
            stat--;
        }
    }
    
    return act;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    
    vector<pair<int, int>> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }
    
    cout << miner(n, a);
    return 0;
    
}