#include<cstdio>
#include<cstring>
using namespace std;

#define N 1000000
int f[N+1];
bool prime[N+1];

void eratos() {
    memset(prime, -1, sizeof prime);
    prime[0] = prime[1] = 0;
    for(int i = 2; i * i <= N; ++i) if(prime[i])
        for(int j = i+i; j <= N; j += i) prime[j] = 0;
}

void calcF() {
    for(int i = 1; i <= N; ++i) f[i] = i;
    for(int i = 2; i <= N; ++i) if(prime[i])
        for(int j = i; j <= N; j += i) f[j] = f[j] / i * (i-1);
}

int main() {
    eratos();
    calcF();
    int tc; scanf("%d", &tc);
    while(tc--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", f[n]);
    }
    return 0;
}
