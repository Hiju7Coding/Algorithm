/*
Cho n bạn trẻ với n chiều cao tương ứng. Cứ mỗi k bạn trẻ liên tiếp thì ta lại chọn ra bạn trẻ có chiều cao "bình thường" nhất. Bạn có chiều cao bình thường sẽ là bạn có chiều cao nằm ở trung vị của k bạn trẻ sau khi đã được sắp xếp. Nếu k là số chẵn thì trung vị sẽ bao gồm 2 phần tử, tuy nhiên ta sẽ lấy bạn thấp hơn trong 2 bạn đó.
Input:
- Dòng 1: 2 số nguyên n và k (1 <= k <= n <= 2.105).
- Dòng 2: n số nguyên ai ( 1 <= ai <= 109).
Output:
In ra n - k + 1 chiều cao bình thường của những bạn trẻ trong k bạn trẻ liên tiếp.
Ví dụ:

Input
5 3

2 3 2 4 5

Output

2 3 4


Giải thích:
3 bạn trẻ đầu tiên là 2 3 2 sau khi sort là 2 2 3 bạn trẻ ở vị trí trung vị là 2.
3 bạn trẻ tiếp theo là 3 2 4 sau khi sort là 2 3 4 bạn trẻ ở vị trí trung vị là 3.
3 bạn trẻ cuối cùng là 2 4 5 bạn trẻ ở vị trí trung vị là 4.
Giới hạn thời gian:1 giây
Giới hạn bộ nhớ: 256 MB
Cách giải: dùng cửa sổ trượt
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;


vector<ll> median(vector<ll>& nums, int k) {
        vector<ll> ans;
        unordered_map<ll, ll> m;
        priority_queue<ll> maxh;  
        priority_queue<ll, vector<ll>, greater<ll>> minh;
        
        int n = nums.size();
        
    
        for (int i = 0; i < k; i++) {
            maxh.push(nums[i]);
        }
        for (int i = k / 2; i > 0; i--) {
            minh.push(maxh.top());
            maxh.pop();
        }
        
        for (int i = k; i <= n; i++) {
            if (k % 2 == 0) {
                ans.push_back(maxh.top());
            } else {
                ans.push_back(maxh.top());
            }
            
            if (i == n) break;
            
            int p = nums[i - k];
            int q = nums[i];
            int balance = 0;
            
            if (p <= maxh.top()) {
                balance--;
                if (p == maxh.top()) {
                    maxh.pop();
                } else {
                    m[p]++;
                }
            } else {
                balance++;
                if (p == minh.top()) {
                    minh.pop();
                } else {
                    m[p]++;
                }
            }
            
            if (!maxh.empty() && q <= maxh.top()) {
                balance++;
                maxh.push(q);
            } else {
                balance--;
                minh.push(q);
            }
            
            if (balance < 0) {
                maxh.push(minh.top());
                minh.pop();
            } else if (balance > 0) {
                minh.push(maxh.top());
                maxh.pop();
            }
            
            while (!maxh.empty() && m[maxh.top()]) {
                m[maxh.top()]--;
                maxh.pop();
            }
            
            while (!minh.empty() && m[minh.top()]) {
                m[minh.top()]--;
                minh.pop();
            }
        }
        
        return ans;
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> result = median(a,k);
    for (int height : result) {
        cout << height << " ";
    }
    return 0;
}