#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005],b[200005],small,large;
int main(){
cin>>t;
while(t--){
cin>>n;
for(int i=1;i<=n;i++)cin>>a[i];
for(int i=1;i<=n;i++)cin>>b[i];
int l=1,r=n;
while(l<=n&&a[l]==b[l])l++;
while(r>0&&a[r]==b[r])r--;
while(l>1&&b[l-1]<=b[l])l--;
while(r<n&&b[r+1]>=b[r])r++;
printf("%d %d\n",l,r);
}
}