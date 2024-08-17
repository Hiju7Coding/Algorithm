#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n; 
    cin>>t;
    while(t--) { 
        cin>>n;
        cout<<(n*(n+1)*(n-1))/3<<endl;
    }
    return 0;
}
//1353C