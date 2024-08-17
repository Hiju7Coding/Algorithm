#include<bits/stdc++.h>
using namespace std;
int main(){int _;cin>>_;while(_--){
int n;string s;
cin>>n>>s;n--;
cout<<"1 ";
int st=0;
for(int i=1;i<n;i++){
if(s[i]!=s[i-1]) st=i;
cout<<st+1<<" ";
}
cout<<endl;
}return 0;}

//1774C