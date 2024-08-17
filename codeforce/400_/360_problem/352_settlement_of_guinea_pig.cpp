#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,a=0,b=0,c=0,d=0,ans=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>x;
			if(x==1) a++;
			else b+=a,a=0;
			ans=max(ans,b/2+a+(b!=0));
		}
		cout<<ans<<endl;
	}
	return 0;
}
//1802B