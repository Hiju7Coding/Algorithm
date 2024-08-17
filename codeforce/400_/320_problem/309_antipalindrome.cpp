#include<bits/stdc++.h>
using namespace std;
int main()
{string s;
cin>>s;
string a=s;
reverse(a.begin(),a.end());
while (a==s&&!s.empty()){
    s.pop_back();
    a=s;
    reverse(a.begin(),a.end());
 
}
cout<<s.size();
    return 0;
}
//981A