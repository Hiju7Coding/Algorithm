#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,k;
  cin>>n>>k;
  if(n<k) k=2*n-k+2;
  if(k<=0) cout<<'0';
  else cout<<(k-1)/2;



    return 0;
}   
//1023B