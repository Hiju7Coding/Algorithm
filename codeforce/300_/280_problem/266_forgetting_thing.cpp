#include<bits/stdc++.h>
using namespace std;
int a,b;
main(){
cin>>a>>b;
if(b-a==1)cout<<a<<" "<<b;
else if(a==b)cout<<a*10+1<<" "<<b*10+2;
else if(a==9&&b==1)cout<<9<<" "<<10;
else cout<<-1;
}
//1225A