#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while (t--) {
int n,k;cin>>n>>k;
k--;
cout<<((k + (n % 2) * k / (n/2)) % n + 1)<<endl;
}
return 0;
}
//1487B