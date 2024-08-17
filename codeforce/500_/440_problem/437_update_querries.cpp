#include<bits/stdc++.h>
using namespace std;
const int N=107;
int main()
{
 int t,x,n,m,p;
 string s,z;
 cin>>t;
 while(t--)
 {
  set<int>st;
  p=0;
  cin>>n>>m>>s;
  for(int i=0;i<m;i++){cin>>x; st.insert(x);}
  cin>>z;
  sort(z.begin(),z.end());
  for(auto u:st)s[u-1]=z[p++];
  cout<<s<<endl;
 }
}
//1986C