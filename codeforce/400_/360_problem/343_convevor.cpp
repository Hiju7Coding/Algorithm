#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,x1,x2,y1,y2;
cin>>t;
while(t--)
{
cin>>n>>x1>>y1>>x2>>y2;
cout<<abs(min({x1,n-x1+1,y1,n-y1+1})-min({x2,n-x2+1,y2,n-y2+1}))<<endl;
}
}
//1811B