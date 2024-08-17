#include<bits/stdc++.h>
using namespace std;
int t, n;
int main(){
	cin>>t;
	while (t--){
		cin>>n; int a=0;
		for(int i=0; i<n; i++) {
			int x;
			cin>>x;
			a += x;
		}
		if (a > n-a) n = a/2*2, a = 1;
		else n = n-a, a = 0;
 
		cout<<n<<endl;
		while (n--) cout<<a<<' '; cout<<endl;
	}
}
//1407A