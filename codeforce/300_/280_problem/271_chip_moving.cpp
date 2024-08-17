#include <bits/stdc++.h>
 
using namespace std;
int s,x,n,i;
int main()
{
    cin>>n;
    for(i=0;i<n;i++) {cin>>x; s+=(x%2);}
    cout<<min(s,n-s);
    return 0;
}
//1213A