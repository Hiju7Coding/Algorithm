#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

unsigned long long power(unsigned long long x,unsigned long long y,unsigned long long z)
{
    if (!y) return 1;
    unsigned long long r=power(x,y/2,z);
    r=r*r%z;
    if (y%2) r=r*x%z;
    return r;
}

int probablyPrime(unsigned long long n,int iteration)
{
    if (n<3) return n==2;
    if (n%2==0) return 0;

    unsigned long long s=n-1,p=0;
    while (s%2==0) s/=2, p++;

    while (iteration--)
    {
        unsigned long long x=power(rand()%(n-1)+1,s,n);

        for (int i=1;i<=p;i++)
        {
            unsigned long long xx=x;
            x=x*x%n;
            if (x==1 && xx!=1 && xx!=n-1) return 0;
        }

        if (x!=1) return 0;
    }

    return 1;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        unsigned long long n;
        cin >> n;
        n--;
        while (!probablyPrime(n,10)) n--;
        cout << n << endl;
    }
}
