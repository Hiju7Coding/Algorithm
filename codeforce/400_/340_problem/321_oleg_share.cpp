#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n,k;
  cin>>n>>k;
  long long arr[n];
  for(int i=0;i<n;i++){cin>>arr[i];}
  sort(arr,arr+n);
  long long ans=0;
  for(int i=1;i<n;i++){
     if((arr[i]-arr[0])%k!=0){cout<<-1; return 0;}
     else{ans+=((arr[i]-arr[0])/k);}
 }
 cout<<ans;

    return 0;
}
//793A