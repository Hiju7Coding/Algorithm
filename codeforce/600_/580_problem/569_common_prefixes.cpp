#include<bits/stdc++.h>
using namespace std;
string s(100,98);
int n,a,t;
int main()
{
cin>>t;
while(t--) {
cin>>n;
for (cout<<s<<endl;n--;cin>>a,s[a]^=1,cout<<s<<endl);
}
return 0;
}

//1384A