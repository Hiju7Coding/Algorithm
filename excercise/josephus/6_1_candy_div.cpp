/*
Có n đứa trẻ đứng thành vòng tròn được đếm số từ 1 đến n. Với một số nguyên k, mỗi khi đứa trẻ nào đếm đến k + 1 thì đứa trẻ đó sẽ được chia kẹo (biết rằng đứa trẻ thứ nhất sẽ đếm đầu tiên). Nhiệm vụ của bạn là xác định thứ tự chia kẹo của các đứa trẻ.
Input: 
Một dòng gồm 2 số nguyên n và k ( 1 <= n <= 2.10, 0 <= k <= 109);
Output:
n số nguyên đại diện cho thứ tự được chia kẹo của các đứa trẻ.
Ví dụ:

Input
7 2
Output
3 6 2 7 5 1 4
*/
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define maxn 2000005

using namespace std;
vector<ll> bit(maxn);

void update(int i, int v){
    for (; i < maxn; i += i & -i)
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
    int lo = 1, hi = maxn - 1;
    while (lo < hi)
    {
        int mid = (lo + hi) >> 1;
        if (get(mid) < k) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;
    k++;
    for (int i = 1; i <= n; i++){
        update(i, 1);
    }
    

    int pos = 0;
    for (int i = n; i >= 1; i--){
        pos = (pos + k) % i;
        
        if (pos == 0) pos = i;

        int idx = Bs(pos);
        cout << idx << " ";

        update(idx, -1);
        pos--;
    }
    return 0;
}
