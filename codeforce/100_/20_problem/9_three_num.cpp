#include<bits/stdc++.h>

using namespace std;

void testcase(){
    int n;
    cin>>n;

    if(n%2==0)
        cout<<"0 "<<n/2<<' '<<n/2<<'\n';
    else
        cout<<"-1\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        testcase();
    return 0;
}