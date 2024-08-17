#include <iostream>
using namespace std;
#define int long long
int a[200010],b[200010];
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans=0;
		int l=1,r=n,res1=0,res0=0,sum=0,num1=0,num0=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]==1)num1++;
			else num0++;
			if(!a[i])ans+=num1;
		}
 
		while(a[r]==0)r--,res0++;
		while(a[l]==1)l++,res1++;
		cout<<max(max(ans,ans-res0+num1-1),ans-res1+num0-1)<<endl;
	}
}
//1760E