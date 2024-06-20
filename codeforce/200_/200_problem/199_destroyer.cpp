#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> cnt(100);
        while (N--){ 
            int a; 
            cin >> a; 
            cnt[a]++; 
        }
        cout << (is_sorted(cnt.begin(), cnt.end(),greater<>()) ? "YES" : "NO") << '\n';
    }
}
//1836A