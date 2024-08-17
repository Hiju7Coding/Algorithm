#include<bits/stdc++.h>
using namespace std;
int T; 
int main(){
cin>>T;
while(T--){
	int a,b,c;
	cin>>a>>b>>c;
	int ans=0;
	if(a)ans++,a--;
	if(b)ans++,b--;
	if(c)ans++,c--;
	if(b<c)swap(b,c);
	if(a<b)swap(a,b);
	if(a&&c)a--,c--,ans++;
	if(a&&b)a--,b--,ans++;
	if(b&&c)b--,c--,ans++;
	if(a&&b&&c)ans++;
	cout<<ans<<endl;
}
return 0;
}
//1313A