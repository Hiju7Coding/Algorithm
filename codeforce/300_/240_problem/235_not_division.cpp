#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,i;
  cin>>t;
  while(t--)
  {
      cin>>n;
      int a[n];
      for(i=0;i<n;i++){cin>>a[i];if(a[i]==1)a[i]++;}
      for(i=1;i<n;i++)if(a[i]%a[i-1]==0)a[i]++;
      for(i=0;i<n;i++)cout<<a[i]<<" ";
      cout<<endl;
  }
}
//1794B