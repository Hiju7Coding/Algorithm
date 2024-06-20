#include<iostream>
using namespace std;
int main()
{
int t,a,b,c,d,e,f;
cin>>t;
while(t--){
cin>>a>>b>>c>>d>>e>>f;
if((a==c||a==e||c==e)&&(b==d||b==f||d==f)) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
}
//1767A