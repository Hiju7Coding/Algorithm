#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{ int n;
cin>>n;
string s;
cin>>s;
set<string>p;
for(int i=0;i<n-1;i++)
{
   string a=s.substr(i,2);
   p.insert(a);
}
cout<<p.size()<<endl;
 
 
}
}
//1833A