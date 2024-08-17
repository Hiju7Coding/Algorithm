#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
while(a--){
   int64_t N,n=0;
   cin>>N;
  map<string,int>m1;
  map<char,int>m2,m3;
  while(N--){
    string s;cin>>s;
    n+=m2[s[0]]+m3[s[1]]-2*m1[s];
   m1[s]++;m2[s[0]]++;m3[s[1]]++;
   }
   cout<<n<<endl;
}
}

//1669E