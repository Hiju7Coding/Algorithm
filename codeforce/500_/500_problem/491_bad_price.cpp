#include<bits/stdc++.h>
using namespace std;
int i,m,n,s,t,a[150000];
int main()
{
    for(cin>>t; t--; cout<<s<<endl,i=s=0)
    {
        for(cin>>n,m=1000005; i<n;)cin>>a[i++];
        for(; i--;)a[i]>m?s++:m=a[i];
    }
}
//1213B