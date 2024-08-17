#include<bits/stdc++.h>
using namespace std;
long long t,n,x,y,o,i;
main(){
cin>>t;
	while(t--){
		cin>>n;y=0,o=1;
		for(i=0;i<n;i++){
			cin>>x;x+=y;
			y=x-i;if(y<0)o=0;
		}
		puts(o?"YES":"NO");
	}
}
//1486A			 	  	 											   						