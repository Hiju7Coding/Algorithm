#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int l1,r1,l2,r2;cin>>l1>>r1>>l2>>r2;
		if(l2>r1||l1>r2){printf("%d\n",l1+l2);}
		else printf("%d\n",max(l1,l2));
	}
}
//1680A