#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;cin>>q;while(q--){
		int a[110]={},b[110]={},fl[110]={};int k=0;
		int n;cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++){
			cin>>fl[i];
			if(fl[i]==0)b[k++]=a[i];
		}
		sort(b,b+k);k--;
		for(int i=0;i<n;i++)
		{
			if(fl[i]==1)cout<<a[i]<<' ';
			else cout<<b[k--]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
//1418B