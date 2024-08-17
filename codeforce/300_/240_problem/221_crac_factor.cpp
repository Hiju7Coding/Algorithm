#include<stdio.h>
int main()
{
	int t, n, k, i;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &n, &k);
		i = 2;
		while(n%i!=0)
			i++;
		printf("%d\n", n + i + (k - 1) * 2);
	}
	return 0;
}
//1350A