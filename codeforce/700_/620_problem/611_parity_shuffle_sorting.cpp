#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005],ans[200005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		cout<<n-1<<endl;
		if(n>1)printf("1 %d\n",n);
		for(int i=2;i<n;i++)
			if(a[i]%2==a[1]%2)printf("%d %d\n",i,n);
			else printf("%d %d\n",1,i);
	}
}
//1733C