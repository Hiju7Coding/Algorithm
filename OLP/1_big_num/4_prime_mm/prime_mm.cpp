#include<cstring>
#include<iostream>
using namespace std;

typedef unsigned long long Long;
const int MAX = 3e6;
bool isPrime[MAX + 1];
int p[MAX], nPrime;

void eratos() {
    memset(isPrime, -1, sizeof isPrime);
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2; i * i <= MAX; ++i) if(isPrime[i])
        for(int j = i + i; j <= MAX; j += i) isPrime[j] = 0;
    for(int i = 0; i <= MAX; ++i)
        if(isPrime[i]) p[nPrime++] = i;
}

bool solutionExists(Long n, int k) {
    Long product = 1;
    for(int i = 0; i < k; ++i) product *= p[i];
    return product <= n;
}

void solve(Long n, int k) {
    if(!solutionExists(n, k)) cout << "-1\n";
    else {
        int l = 0, h = nPrime - k;
        while(l < h) {
            int m = (l + h + 1) / 2; bool ok = true;
            Long product = 1;
            for(int i = m; i < m + k; ++i)
                if(n / product >= (Long) p[i]) product *= p[i];
                else ok = false;
            if(ok) l = m; else h = m-1;
        }
        Long res = 1;
        for(int i = l; i < l + k; ++i) res *= p[i];
        cout << res << "\n";
    }
}

int main() {
    eratos();
    int tc; cin >> tc;
    Long n; int k;
    while(tc--) cin >> n >> k, solve(n, k);
    return 0;
}
