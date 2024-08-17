#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int t;cin>>t;while(t--){
    lli n,k;cin>>n;k=n;
	while(k){
		if(k%10&&n%(k%10)){n++;k=n;}
		else k/=10;}
		cout<<n<<endl;
	}
}
//1411B