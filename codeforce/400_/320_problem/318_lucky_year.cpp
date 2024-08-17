#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int d = pow(10, floor(log10(n)));
    cout << d - n % d;
}
//808A