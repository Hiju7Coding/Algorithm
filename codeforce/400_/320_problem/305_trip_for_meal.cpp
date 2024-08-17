#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c; cin>>n>>a>>b>>c;
    if(n>1) cout<<min(a,b)+(n-2)*min(a,min(b,c))<<endl;
    else cout<<0<<endl;
    return 0;
}
//876A