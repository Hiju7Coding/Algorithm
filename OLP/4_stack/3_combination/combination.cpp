#include <iostream>
#include <stack>

#define MAX 10
using namespace std;

int n;
int k;
int a[MAX];
int Bool[MAX] = {0};

void out() {
    for (int i = 1; i <= k; i++)
        printf("%5d", a[i]);
    cout << endl;
}

void combination_stack() {
    stack<pair<int, int>> st; // Stack để lưu trạng thái (i, next)

    st.push({1, 1}); // Khởi tạo với tổ hợp đầu tiên

    while (!st.empty()) {
        int i = st.top().first;
        int next = st.top().second;
        st.pop();

        for (int j = next; j <= n; ++j) {
            if (!Bool[j]) {
                a[i] = j;
                Bool[j] = 1;
                if (i == k) {
                    out();
                } else {
                    st.push({i + 1, j + 1});
                }
                Bool[j] = 0;
            }
        }
    }
}

int main() {
    n = 5;
    k = 3;
    combination_stack();
    return 0;
}
