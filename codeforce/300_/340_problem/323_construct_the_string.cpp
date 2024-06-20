#include<iostream>
using namespace std;
main()
{
    int t,n,a,b;
    for(cin>>t; t--; cout<<endl)
        for(cin>>n>>a>>b; n--;) cout<<(char)(122-n%b);
}
//1335B