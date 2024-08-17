#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;cin>>a>>b>>c>>d;
		cout<<(a?a+min(b,c)*2+min(a+1,abs(b-c)+d):1)<<'\n';

    }

    return 0;
}


//1792B