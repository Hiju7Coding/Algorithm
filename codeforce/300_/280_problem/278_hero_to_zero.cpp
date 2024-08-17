#include<bits/stdc++.h>
using namespace std;
int main(){
long long c,n,n1,k,sum=0;
cin>>c;
while(c-->0){
cin>>n>>k;
n1=n;
while(n>=k){
    sum+=(n/k)*(k-1)-1;
    n/=k;
}
cout<<n1-sum<<endl;
sum=0;
}
}
//1175A