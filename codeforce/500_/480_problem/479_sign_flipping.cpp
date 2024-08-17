#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
    int n,a,b=1;
    cin>> n;
	while(n--)
    {
	cin>>a;
	cout<<abs(a)*b<<" ";
    b=b*-1;
    }
	cout<<endl;}
}
//1375A