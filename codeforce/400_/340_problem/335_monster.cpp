#include<bits/stdc++.h>
using namespace std;

int t,n,k,x;
pair<int,int> a[1000000];


int main() {
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>x;
			a[i]={-1-(x-1)%k,i};
		}
		sort(a+1,a+1+n);
		for(int i=1;i<=n;i++)
			cout<<a[i].second<<" ";
	cout<<endl;

}

}

//1849B