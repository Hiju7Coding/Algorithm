#include <cstdio>
 
int t, h, m;
 
int main() {
 
    for(scanf("%d", &t); t--;) {
 
        scanf("%d:%d", &h, &m);
        printf("%02d:%02d %s\n", h>12?h-12:h?h:12, m, h<12?"AM":"PM");
 
    }
 
}
//1950C