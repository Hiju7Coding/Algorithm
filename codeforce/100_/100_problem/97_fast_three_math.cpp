# include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum=0,p=0,x;
		cin>>n;
		for(int i=0 ; i<n ; i++){
			cin>>x , sum+=x;
			if(x%3==1) p=1;
		}
		if(sum%3!=1)  cout<<(sum%3==2)<<endl;
		else cout<<2-p<<endl;	
	}
}
//1933B