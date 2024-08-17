#include <stdio.h>
int _, n, j, a[1010];
int main() 
{
    for(scanf("%d", &_); _--; j=0) 
    {
        scanf("%d", &n);
        for(int i=0; i<n; i++) scanf("%d", a+i);
        for(int i=1; i<n-1; i++) if (a[i]>a[i-1] && a[i]>a[i+1]) j=i;
        if (j) printf("YES\n%d %d %d\n", j, j+1, j+2);
        else puts("NO");
    }
}
//1380A